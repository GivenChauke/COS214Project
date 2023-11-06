#ifndef NOTREADYTOORDER_H
#define NOTREADYTOORDER_H
#include <string>
#include <iostream>
using namespace std;
#include "TableState.h"

class AbstractTable;

class NotReadyToOrder : public TableState
{
    public:
        string getStatus();
        bool action();
};

#endif
