#ifndef UMSJONARMADURUI_H
#define UMSJONARMADURUI_H

#include "MainUi.h"
#include <string>
using namespace std;

class UmsjonarmadurUi
{
    public:
        UmsjonarmadurUi();
        umsjonarmadur_menu();

    private:
        string name;
        void validate_ums_input(char umsinput);
};

#endif // UMSJONARMADURUI_H
