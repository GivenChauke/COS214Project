#ifndef READYTOORDER_H
#define READYTOORDER_H
#include <string>
#include <iostream>
using namespace std;
#include "TableState.h"
class ReadyToOrder : public TableState
{
    public:
        string getStatus(){return "READYTOORDER";};
        void action(){cout<<"TABLE: WE READY TO ORDER";};
};

#endif