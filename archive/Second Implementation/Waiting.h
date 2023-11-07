#ifndef WAITING_H
#define WAITING_H
#include <string>
#include <iostream>
using namespace std;
#include "TableState.h"

class AbstractTable;

class Waiting : public TableState
{
    public:
        string getStatus();
        bool action();

};

#endif
