#include "UmsjonarmadurUi.h"

UmsjonarmadurUi::UmsjonarmadurUi()
{

    umsjonarmadur_menu();
}

UmsjonarmadurUi::umsjonarmadur_menu()
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
    char umsinput;
    do{
    cout << "-----------------------------  " << endl;
    cout << "1. Listi af starfsmonnum       " << endl;
    cout << "2. Skoda pantanir              " << endl;
    cout << "3. Listi af stodum             " << endl;
    cout << "4. til ad fara til baka        " << endl;
    cout << "-----------------------------  " << endl;
    cout << endl ;
    char umsinput;
    cin >> umsinput ;
    validate_ums_input(umsinput);
    }while(umsinput != '4');
}
void UmsjonarmadurUi::validate_ums_input(char umsinput)
{
        if(umsinput == '1')
        {
            cout << "thu valdir ad skoda lista af starfsmonnum" << endl;

        }
        else if(umsinput == '2')
        {
            cout << "thu valdir ad skoda pantanir" << endl;
            // allar pantanir eğa eitthvağ
        }
        else if(umsinput == '3')
        {
            cout << "thu valdir ad skoda lista af stodum" << endl;
            // listi af stodum
        }
        else if(umsinput == '4')
        {
            cout << "thu valdir ad fara til baka" << endl;
        }
        else
        {
            cout << "vitluast inntak" << endl;

        }
}
