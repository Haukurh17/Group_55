#ifndef BAKARIUI_H
#define BAKARIUI_H

#include "MainUi.h"
#include <string>

using namespace std;

class BakariUi
{
    public:
        BakariUi();
        bakari_menu();

    private:
        string name;
        void validate_bak_input(char bakinput);
};

#endif // BAKARIUI_H
