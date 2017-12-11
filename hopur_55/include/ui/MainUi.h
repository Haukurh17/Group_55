#ifndef MAINUI_H
#define MAINUI_H

#include "OrderPizzaUi.h"
#include "SolumadurUi.h"
#include "BakariUi.h"
#include "UmsjonarmadurUi.h"
#include <string>
#include <iostream>

using namespace std;

class MainUi
{
    public:
        MainUi();
        void main_menu();

    private:
        void validate_user_input(char input);

};

#endif // MAINUI_H
