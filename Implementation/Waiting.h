#ifndef WAITING_H
#define WAITING_H
#include <string>
#include <iostream>
using namespace std;
#include "TableState.h"

class Waiting : public TableState
{
    public:
        string getStatus(){return "WAITING";}
        void action(){cout<<"TABLE: HOW LONG TILL OUR ORDER IS DONE";}
};

#endif