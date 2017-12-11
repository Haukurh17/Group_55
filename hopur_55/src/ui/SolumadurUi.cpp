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
    char solinput;
    do{
    cout << "-----------------------------  " << endl;
    cout << "1. Taka a moti pontunum        " << endl;
    cout << "2. Skoda pantanir              " << endl;
    cout << "3. Breyta pontunum?            " << endl;
    cout << "4. Fara til baka               " << endl;
    cout << "-----------------------------  " << endl;
    cout << endl ;
    cin >> solinput;
    validate_sol_input(solinput);
    }while(solinput != '4');
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
        else if(solinput == '4')
        {
            cout << "thu valdir ad fara til baka" << endl;
        }
        else
        {
            cout << "vitlaust inntak" << endl;
        }
}
