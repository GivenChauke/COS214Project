#ifndef BILLMEMENTO_H
#define BILLMEMENTO_H

#include <string>
#include "BillState.h"
using namespace std;

class BillMemento 
{
    private:
        BillState* state;
    
    public:
        BillMemento(){state=NULL;}
        BillState* getState();
        void setState(BillState* bs);

};
//#include "BillMemento.cpp"
#endif