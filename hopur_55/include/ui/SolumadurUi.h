#ifndef SOLUMADURUI_H
#define SOLUMADURUI_H

#include "MainUi.h"
#include <string>
using namespace std;

class SolumadurUi
{
    public:
        SolumadurUi();
        solumadur_menu();
    private:
        void validate_sol_input(char solinput);
};

#endif // SOLUMADURUI_H
