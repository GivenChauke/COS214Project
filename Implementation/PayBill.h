#ifndef PAYBILL_H
#define PAYBILL_H
#include <string>
#include <iostream>
#include "TableState.h"

class AbstractTable;

using namespace std;

class PayBill: public TableState
{
    public:
        string getStatus();
        bool action();
};

#endif
