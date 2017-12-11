#ifndef ORDERPIZZAUI_H
#define ORDERPIZZAUI_H

#include "MainUi.h"
#include "Pizza.h"

class OrderPizzaUi
{
    public:
        OrderPizzaUi();
        orderpizza_menu();

    private:
        void validate_op_input(char opinput);
        void validate_st_input(char stinput);
};

#endif // ORDERPIZZAUI_H
