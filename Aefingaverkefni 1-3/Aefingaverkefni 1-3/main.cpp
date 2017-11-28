
#include <iostream>
#include <fstream>

using namespace std;

class Superhero
{
private:
    string nafn;
    int aldur;
    char ofurkraftur;
public:
    Superhero();
    Superhero(string n, int a, char o);
    friend istream& operator >> (istream& in, Superhero& superHero);
    friend ostream& operator << (ostream& out, Superhero& superHero);
};
int main(int argc, const char * argv[]) {
    
    ofstream fout;
    Superhero superHero1;
    fout.open("Superheroes.txt", ios::app);
    cin >> superHero1;
    fout << superHero1 << endl;
    fout.close();
    ifstream fin;
    fin.open("Superheroes.txt");
    fin >> superHero1;
    return 0;
}
Superhero::Superhero()
{
    nafn = " ";
    aldur = 0;
    ofurkraftur = 'n';
}
Superhero::Superhero(string n, int a, char o)
{
    nafn = n;
    aldur = a;
    ofurkraftur = o;
}
istream& operator >> (istream& in, Superhero& superHero)
{
    cout << "Please enter name" << endl;
    getline(in, superHero.nafn);
    cout << "Please enter age" << endl;
    in >> superHero.aldur;
    cout << "Please enter the character for a superpower" << endl;
    in >> superHero.ofurkraftur;
    return in;
}
ostream& operator << (ostream& out, Superhero& superHero)
{
    out << superHero.nafn << " (" << superHero.aldur << "): " << superHero.ofurkraftur << endl;
    return out;
}