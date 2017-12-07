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

    cout << "Nafn: " ;
    cin.ignore();
    getline(cin, name) ;
    cout << "Simanumer: " ;
//    cin >> simanr
    cout << "Veldu stad sem thu vilt panta a" << endl;
    cout << "1. (Stadur nr eitt)" << endl;
    cout << "2. (Stadur nr tvo)" << endl;
//    cin >> stadur ;

    cout << "1. Tvennutilbod" << endl;
    cout << "2. Klikkadtilbod" << endl;
    cout << "3. Veldu sjalfur" << endl;

    cout << endl;


}
