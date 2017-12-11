
#include <iostream>
#include <fstream>
using namespace std;

class Umsjon
{
private:
    string alegg;
    int n_alegg = 0;
    string staerd;
    string medlaeti;
    string afhendingarstadur;
    
public:
    Umsjon();
    Umsjon(string a, int an, string s, string m, string af);
    void addAlegg();
    void synaAlegg();
};

int main(int argc, const char * argv[]) {
    
    Umsjon umsjonarmadur1;
    umsjonarmadur1.addAlegg();
    umsjonarmadur1.synaAlegg();
    
    
    return 0;
}
Umsjon::Umsjon()
{
    string alegg = " ";
    string staerd = " ";
    string medlaeti = " ";
    string afhendingarstadur = " ";
}
Umsjon::Umsjon(string a, int an, string s, string m, string af)
{
    alegg = a;
    n_alegg = an;
    staerd = s;
    medlaeti = m;
    afhendingarstadur = af;
}
void Umsjon::addAlegg()
{
    ofstream fout;
    fout.open("Alegg.txt", ios::app);
    char svar = 'y';
    do{
        cin >> alegg;
        fout << alegg << endl;
        /*an += 1;*/
        cout << "Viltu baeta meira vid y/n?" << endl;
        cin >> svar;
        while (svar != 'y' && svar != 'n')
        {
            cout << svar << endl;
            cout << "Vitlaust inntak. Viltu baeta meira vid y/n?" << endl;
            cin >> svar;
        }
    }while(svar == 'y');
    fout.close();
}
void Umsjon::synaAlegg()
{
    ifstream fin;
    string str;
    fin.open("Alegg.txt");
    if(fin.is_open())
    {
        for(int i=0; i < 25; i++)
        {
            getline(fin, str);
            cout << str << endl;
            if (fin.eof())
            {
                break;
            }}
    }
}