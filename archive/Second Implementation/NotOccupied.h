#ifndef NOTOCCUPIED_H
#define NOTOCCUPIED_H
#include <string>
#include <iostream>
using namespace std;
#include "TableState.h"

class AbstractTable;

class NotOccupied : public TableState
{
    public:
        string getStatus(){return "NotOccupied";};
        bool action(){return false;};
};

#endif
