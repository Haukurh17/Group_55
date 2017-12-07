#include "SolumadurUi.h"

SolumadurUi::SolumadurUi()
{
    solumadur_menu();
}
SolumadurUi::solumadur_menu()
{
    string name;
    string stadur;
    cout << "Nafn: " ;
    cin.ignore();
    getline(cin, name) ;

    cout << "Stadur: " ;
    cin >> stadur ;
    cout << endl;
    cout << "Velkomin/nn til starfa " << name << ", " << "thu ert ad skra thig inn fra" << ": " << stadur << endl;

    cout << "-----------------------------" << endl;
    cout << "1. Taka a moti pontunum" << endl;
    cout << "2. Skoda pantanir" << endl;
    cout << "3. Breyta pontunum?" << endl;
    cout << endl ;
    cout << "-----------------------------" << endl;
    cout << "Til að fara til baka (dostuff)" << endl;
    char solinput;
    cin >> solinput;
    validate_sol_input(solinput);
}
void SolumadurUi::validate_sol_input(char solinput)
{
        if(solinput == '1')
        {
            cout << "thu valdir ad taka a moti pontunum" << endl;

        }
        else if(solinput == '2')
        {
            cout << "thu valdir ad skoda pantanir" << endl;
            // allar pantanir eða eitthvað
        }
        else if(solinput == '3')
        {
            cout << "thu valdir ad breyta pontunum" << endl;
            // listi af stodum
        }
        else
        {
            cout << "vitlaust inntak" << endl;
        }
}
