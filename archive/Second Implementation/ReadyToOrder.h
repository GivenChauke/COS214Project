#ifndef READYTOORDER_H
#define READYTOORDER_H
#include <string>
#include <iostream>
using namespace std;
#include "TableState.h"

class AbstractTable;

class ReadyToOrder : public TableState

{

    public:
        string getStatus();
        bool action();

};

#endif
