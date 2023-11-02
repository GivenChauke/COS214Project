#ifndef NOTREADYTOORDER_H
#define NOTREADYTOORDER_H
#include <string>
#include <iostream>
using namespace std;
#include "TableState.h"

class NotReadyToOrder : public TableState
{
    public:
        string getStatus(){return "NOTREADYTOORDER";};
        void action(){cout<<"Customer: Give us a minutes. We will call you when we ready to order";}
};

#endif