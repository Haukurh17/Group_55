
#include <iostream>
#include <fstream>
using namespace std;

class Umsjon
{
private:
    string alegg[30];
    int n_alegg;
    int staerd[10][10];
    string medlaeti[20][20];
    string afhendingarstadur[20];
    string gos[20][20];
    
public:
    Umsjon();
    Umsjon(string a[], int an, int s[], string m[], string af[], string g[]);
    void addAlegg();
    void synaAlegg();
    void addMedlaeti();
    void addStaerd();
    void addStadur();
    void addGos();
};

int main(int argc, const char * argv[]) {
    
    Umsjon umsjonarmadur1;
    //umsjonarmadur1.addAlegg();
    //umsjonarmadur1.synaAlegg();
    //umsjonarmadur1.addMedlaeti();
    //umsjonarmadur1.addStaerd();
    //umsjonarmadur1.addStadur();
    umsjonarmadur1.addGos();
    return 0;
}
Umsjon::Umsjon()
{
    alegg[0] = " ";
    staerd[0][0] = 0;
    medlaeti[0][0] = " ";
    afhendingarstadur[0] = " ";
    gos[0][0] = " ";
}
Umsjon::Umsjon(string a[], int an, int s[], string m[], string af[], string g[])
{
    alegg[0] = a[0];
    n_alegg = an;
    staerd[0][0] = s[0];
    medlaeti[0][0] = m[0][0];
    afhendingarstadur[0] = af[0];
    gos[0][0] = g[0][0];
}
void Umsjon::addAlegg()
{
    char svar = 'y';
    int i = 0;
    cout << "Thu valdir ad baeta vid aleggjum" << endl;
    do{
        cin >> alegg[i];
        cout << "Viltu baeta meira vid y/n?" << endl;
        cin >> svar;
        while (svar != 'y' && svar != 'n')
        {
            cout << svar << endl;
            cout << "Vitlaust inntak. Viltu baeta meira vid y/n?" << endl;
            cin >> svar;
        }
        i++;
    }while(svar == 'y');
}
void Umsjon::synaAlegg()
{
    //kalla á dataclass sem sýnir ifstream hér
}
void Umsjon::addMedlaeti()
{
    char svar = 'y';
    int i = 0;
    cout << "Thu valdir ad baeta vid medlaeti" << endl;
    do{
        cout << "Skradu medlaetid" << endl;
        cin >> medlaeti[i][0];
        cout << "Skradu verdid a medlaetinu" << endl;
        cin >> medlaeti[i][1];
        cout << "Viltu baeta meira vid y/n?" << endl;
        cin >> svar;
        while (svar != 'y' && svar != 'n')
        {
            cout << svar << endl;
            cout << "Vitlaust inntak. Viltu baeta meira vid y/n?" << endl;
            cin >> svar;
        }
        i++;
    }while(svar == 'y');
    for(int k = 0; k < i; k++)
    {
        cout << medlaeti[k][0] << " - " << medlaeti[k][1] << " kr." << endl;
    }
}
void Umsjon::addStaerd()
{
    char svar = 'y';
    int i = 0;
    cout << "Thu valdir ad baeta vid staerdum" << endl;
    do{
        cout << "Hversu margar tommur viltu ad pizzan se?" << endl;
        cin >> staerd[i][0];
        cout << "Hvad viltu ad pizzan kosti?" << endl;
        cin >> staerd[i][1];
        cout << "Viltu baeta meira vid y/n?" << endl;
        cin >> svar;
        while (svar != 'y' && svar != 'n')
        {
            cout << svar << endl;
            cout << "Vitlaust inntak. Viltu baeta meira vid y/n?" << endl;
            cin >> svar;
        }
        i++;
        }while(svar == 'y');
    for(int k = 0; k < i; k++)
    {
        cout << staerd[k][0] << "\" - " << staerd[k][1] << " kr." << endl;
    }
}
void Umsjon::addStadur()
{
    char svar = 'y';
    int i = 0;
    cout << "Thu valdir ad baeta vid afhendingarstodum" << endl;
    do{
        cout << "Hvada stad viltu baeta vid?" << endl;
        cin >> afhendingarstadur[i];
        cout << "Viltu baeta fleirum vid y/n?" << endl;
        cin >> svar;
        while (svar != 'y' && svar != 'n')
        {
            cout << svar << endl;
            cout << "Vitlaust inntak. Viltu baeta fleirum vid y/n?" << endl;
            cin >> svar;
        }
        i++;
    }while(svar == 'y');
    for(int k=0; k < i; k++)
    {
        cout << afhendingarstadur[k] << endl;
    }
}
void Umsjon::addGos()
{
    char svar = 'y';
    int i = 0;
    cout << "Thu valdir ad baeta vid gosi" << endl;
    do{
        cout << "Hvada gosi viltu baeta vid?" << endl;
        cin >> gos[i][0];
        cout << "Hvad kostar flaskan" << endl;
        cin >> gos[i][1];
        cout << "Viltu baeta meiru vid y/n?" << endl;
        cin >> svar;
        while (svar != 'y' && svar != 'n')
        {
            cout << svar << endl;
            cout << "Vitlaust inntak. Viltu baeta meiru vid y/n?" << endl;
            cin >> svar;
        }
        i++;
    }while(svar == 'y');
    for(int k = 0; k < i; k++)
    {
        cout << gos[k][0] << " - " << gos[k][1] << " kr." << endl;
    }
}

