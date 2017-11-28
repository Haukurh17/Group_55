
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
string n;
int a;
char o;
int main(int argc, const char * argv[]) {
    
    ifstream fin;
    ofstream fout;
    Superhero superHero1;
    fout.open("Superhero.txt.", ios::app);
    fout << superHero1 << endl;
    fin.open("Superhero.txt", ios::app);
    if(fin.is_open())
    {
        cin >> superHero1;
    }
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
    getline(in, n);
    cout << "Please enter age" << endl;
    in >> a;
    cout << "Please enter the character for a superpower" << endl;
    in >> o;
    return in;
}
ostream& operator << (ostream& out, Superhero& superHero)
{
    out << superHero.nafn << " (" << superHero.aldur << "): " << superHero.ofurkraftur << endl;
    return out;
}