#include "MainUi.h"

MainUi::MainUi()
{
    main_menu();
}
MainUi::go_back()
{

}
void MainUi::main_menu()
{

        cout << "Velkomin a _____ pizza" << endl;
        char input;
        cout << "Veldu videigandi adgerd" << endl;
        cout << "-----------------------------" << endl;
        cout << "1. Umsjonarmadur   " << endl;
        cout << "2. Solumadur       " << endl;
        cout << "3. Bakari          " << endl;
        cout << "4. Panta pizzu     " << endl;
        cout << "-----------------------------" << endl;
        cout << "Til ad fara til baka(dostuff)" << endl;
        cin >> input;
        validate_user_input(input);

}

void MainUi::validate_user_input(char input)
{

        if(input == '1')
        {
            cout << "thu valdir umsjonarmann" << endl;
            UmsjonarmadurUi();
        }
        else if(input == '2')
        {
            cout << "thu valdir solumann" << endl;
            SolumadurUi();
        }
        else if(input == '3')
        {
            cout << "thu valdir bakara" << endl;
            BakariUi();
        }
        else if(input == '4')
        {
            cout << "thu valdir ad panta pizzu" << endl;
            OrderPizzaUi();
        }
        else
        {
            cout << "Vittlaust inntak" << endl;
        }
}
