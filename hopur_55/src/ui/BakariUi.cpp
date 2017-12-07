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

    cout << "Velkomin/nn til starfa " << name << ", " << "thu ert ad skra thig inn fra" << ": " << stadur << endl;
    cout << "-----------------------------" << endl;
    cout << "1. Listi af nyjum pöntunum" << endl;
    cout << "2. Merkja pizzur" << endl;
    cout << "3. Listi af gomlum pontunum" << endl;
    cout << endl;
    cout << "-----------------------------" << endl;
    cout << "Til ağ fara til baka (dostuff)" << endl;

    char bakinput;
    cin >> bakinput;
    validate_bak_input(bakinput);
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
        else
        {
            cout << "Vitlaust intak" << endl;
        }
}


