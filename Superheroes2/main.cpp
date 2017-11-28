
#include <iostream>
#include <fstream>

using namespace std;

class Superhero
{
private:
    string nafn;
    int aldur;
    char ofurkraftur;
    string superpower;
public:
    string ok;
    Superhero();
    Superhero(string n, int a, char o, string s);
    string okraftur();
    friend istream& operator >> (istream& in, Superhero& superHero);
    friend ostream& operator << (ostream& out, Superhero& superHero);
};
int main(int argc, const char * argv[]) {
    string str;
    ofstream fout;
    Superhero superHero1;
    fout.open("Superheroes.txt", ios::app);
    cin >> superHero1;
    fout << superHero1 << endl;
    fout.close();
    ifstream fin;
    fin.open("Superheroes.txt");
    while(!fin.eof())
    {
        getline(fin,str);
        cout << str << endl;
    }fin.close();
}
Superhero::Superhero()
{
    nafn = " ";
    aldur = 0;
    ofurkraftur = 'n';
    superpower = "None";
}
Superhero::Superhero(string n, int a, char o, string s)
{
    nafn = n;
    aldur = a;
    ofurkraftur = o;
    superpower = s;
}
istream& operator >> (istream& in, Superhero& superHero)
{
    cout << "Please enter name" << endl;
    getline(in, superHero.nafn);
    cout << "Please enter age" << endl;
    in >> superHero.aldur;
    cout << "Please enter the character for a superpower" << endl;
    in >> superHero.ofurkraftur;
    
    if(superHero.ofurkraftur == 'f'|| superHero.ofurkraftur == 'F')
    {
        superHero.superpower = "Flying";
    }
    else if(superHero.ofurkraftur == 'g'|| superHero.ofurkraftur == 'G')
    {
        superHero.superpower = "Giant";
    }
    else if(superHero.ofurkraftur == 'h'|| superHero.ofurkraftur == 'H')
    {
        superHero.superpower = "Hacker";
    }
    else if(superHero.ofurkraftur == 'n' || superHero.ofurkraftur == 'N')
    {
        superHero.superpower = "None";
    }
    else
    {
        superHero.superpower = "Weakling";
    }
    return in;
}
ostream& operator << (ostream& out, Superhero& superHero)
{
    out << superHero.nafn << " (" << superHero.aldur << "): " << superHero.superpower << endl;
    return out;
}
