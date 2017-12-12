#ifndef PIZZA_H
#define PIZZA_H

#include <string>
#include <iostream>
#include <istream>
#include <ostream>
#include "OrderPizzaUi.h"

using namespace std;

class Pizza
{
private:
    char staerd;
    string toppings[20];
    int numberofToppings;
public:
    Pizza();
    Pizza(char s, string t[], int n);
    friend istream& operator >> (istream& in, Pizza& pizza);
    friend ostream& operator << (ostream& out, Pizza& pizza);
    int pizzuVerd(int numberofToppings, char staerd);
};

#endif // PIZZA_H
