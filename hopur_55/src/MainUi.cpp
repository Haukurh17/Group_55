#include "MainUi.h"

MainUi::MainUi()
{
    main_menu();
}

void MainUi::main_menu()
{

        char input;
        do{
        cout << "Velkomin a _____ pizza" << endl;
        cout << "Veldu videigandi adgerd" << endl;
        cout << "-----------------------------" << endl;
        cout << "1. Umsjonarmadur   " << endl;
        cout << "2. Solumadur       " << endl;
        cout << "3. Bakari          " << endl;
        cout << "4. Panta pizzu     " << endl;
        cout << "5. Loka forriti    " << endl;
        cout << "-----------------------------" << endl;
        cin >> input;
        validate_user_input(input);
        }while(input != '5');

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

