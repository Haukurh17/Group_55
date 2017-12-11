#include "OrderPizzaUi.h"

OrderPizzaUi::OrderPizzaUi()
{
    orderpizza_menu();
}
OrderPizzaUi::orderpizza_menu()
{
    string name;
    int simanr;
    char stadur;
    char opinput;
    char stinput;
    cout << "Nafn: ";
    cin.ignore();
    getline(cin, name) ;
    cout << "Simanumer: ";
    cin >> simanr;
    cout << "Veldu stad sem thu vilt panta a" << endl;
    cout << "1. (Stadur nr eitt)            " << endl;
    cout << "2. (Stadur nr tvo)             " << endl;
    cin >> stinput;
    validate_st_input(stinput);
    do{
    cout << "1. Tvennutilbod    " << endl;
    cout << "2. Klikkadtilbod   " << endl;
    cout << "3. Veldu sjalfur   " << endl;
    cout << "4. Ganga fra pontun" << endl;
    cout << "5. Sja pontun      " << endl;
    cin >> opinput;
    validate_op_input(opinput);
    }while(opinput != '4');
    cout << endl;

}
void OrderPizzaUi::validate_op_input(char opinput)
{
        if(opinput == '1')
        {
            cout << "thu valdir tvennutilbod" << endl;

        }
        else if(opinput == '2')
        {
            cout << "thu valdir klikkad tilbod" << endl;
            // allar pantanir eða eitthvað
        }
        else if(opinput == '3')
        {
            cout << "thu valdir ad velja sjalfur" << endl;
            Pizza pizza1;
            cin >> pizza1;
        }
        else
        {
            cout << "vitlaust inntak" << endl;
        }
}
void OrderPizzaUi::validate_st_input(char stinput)
{
        if(stinput == '1')
        {
            cout << "thu valdir stad 1" << endl;

        }
        else if(stinput == '2')
        {
            cout << "thu valdir stad 2" << endl;
            // allar pantanir eða eitthvað
        }
        else
        {
            cout << "vitlaust inntak" << endl;

        }
}
