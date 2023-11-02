#ifndef NOTOCCUPIED_H
#define NOTOCCUPIED_H
#include <string>
#include <iostream>
using namespace std;
#include "TableState.h"

class NotOccupied : public TableState
{
    public:
        string getStatus(){return"NotOccupied";}
        void action(){};
};

#endif