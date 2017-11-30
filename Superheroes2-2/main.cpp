
#include <iostream>
#include <fstream>

using namespace std;

class Superhero
{
private:
    char nafn[30];
    int aldur;
    char ofurkraftur;
    char superpower[30];
public:
    Superhero();
    Superhero(string n, int a, char o, string s);
    friend istream& operator >> (istream& in,  Superhero& superHero);
    friend ostream& operator << (ostream& out, Superhero& superHero);
};
int main() {
    bool accepted;
    accepted = true;
    char answer;
    Superhero superHero1;
    do{
        ofstream fout;
        cin >> superHero1;
        fout.open("Superheroes2.dat", ios::binary | ios::app);
        fout.write((char*)(&superHero1), sizeof(Superhero));
        fout.close();
        cout << "Would you like to enter details about another superhero? y/n" << endl;
        cin >> answer;
        if(answer == 'y')
        {
            continue;
        }
        if(answer == 'n')
        {
            accepted = false;
        }
    }while(accepted == true);

    ifstream fin;
    fin.open("Superheroes2.dat", ios::binary);
    if(fin.is_open())
       {
           fin.seekg(0, fin.end);
           int recordCount = fin.tellg() / sizeof(Superhero);
           fin.seekg(0, fin.beg);
           for(int i = 0; i < recordCount; i++)
           {
               fin.read((char*)(&superHero1), sizeof(Superhero));
               cout << superHero1 << endl;
           }
       }
       else {
           cout << "could not open file" << endl;
       }
       fin.close();
       return 0;

}
Superhero::Superhero()
{
    nafn[0] = '\0';
    aldur = 0;
    ofurkraftur = 'n';
    superpower[0] = '\0';
}
Superhero::Superhero(string n, int a, char o, string s)
{
    nafn[29] = n[29];
    aldur = a;
    ofurkraftur = o;
    superpower[29] = s[29];
}
istream& operator >> (istream& in, Superhero& superHero)
{
    cout << "Please enter name" << endl;
    in >> superHero.nafn;
    cout << "Please enter age" << endl;
    in >> superHero.aldur;
    cout << "Please enter the character for a superpower" << endl;
    in >> superHero.ofurkraftur;
    /*if(superHero.ofurkraftur == 'f'){
        superHero.superpower[] = "Flying";
    }
    if(superHero.ofurkraftur == 'g'){
        superHero.superpower[] = "Giant";
    }
    if(superHero.ofurkraftur == 'h'){
        superHero.superpower[] = "Hacker";
    }
    if(superHero.ofurkraftur == 'n'){
        superHero.superpower[] = "None";
    }
    else{
        superHero.superpower[] = "Weakling";
    }
    */
    return in;
}
ostream& operator << (ostream& out, Superhero& superHero)
{
    out << superHero.nafn << " (" << superHero.aldur << "): " << superHero.superpower << endl;
    return out;
}
