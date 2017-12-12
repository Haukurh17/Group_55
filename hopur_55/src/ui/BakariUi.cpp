#include "BakariUi.h"

BakariUi::BakariUi()
{
    bakari_menu();
}
BakariUi::bakari_menu()
{

    string name;
    string stadur;
    cout << "Nafn: " ;
    cin.ignore();
    getline(cin, name) ;
    cout << "Stadur: " ;
    cin >> stadur ;
    char bakinput;
    do {
    cout << "Velkomin/nn til starfa " << name << ", " << "thu ert ad skra thig inn fra" << ": " << stadur << endl;
    cout << "-----------------------------  " << endl;
    cout << "1. Listi af nyjum pöntunum     " << endl;
    cout << "2. Merkja pizzur               " << endl;
    cout << "3. Listi af gomlum pontunum    " << endl;
    cout << "4. til ad fara til baka        " << endl;
    cout << "-----------------------------  " << endl;
    cout << endl;
    cin >> bakinput;
    validate_bak_input(bakinput);
    }while(bakinput != 4);
}
void BakariUi::validate_bak_input(char bakinput)
{
        if(bakinput == '1')
        {
            cout << "thu valdir ad skoda lista af nyjum pontunum" << endl;

        }
        else if(bakinput == '2')
        {
            cout << "thu hefur valid ad merkja pizzur" << endl;
            // allar pantanir eğa eitthvağ
        }
        else if(bakinput == '3')
        {
            cout << "thu valdir ad skoda lista af gomlum pontunum" << endl;

        }
        else if(bakinput == '4')
        {
            cout << "thu valdir ad fara til baka" << endl;
            MainUi();
        }
        else
        {
            cout << "Vitlaust intak" << endl;
        }
}


