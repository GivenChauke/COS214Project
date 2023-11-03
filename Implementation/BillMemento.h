#ifndef BILLMEMENTO_H
#define BILLMEMENTO_H

#include <string>
#include "BillState.h"

class BillMemento {
    private:
        BillState state;
    
    public:
        BillState getState();
        void setState(BillState bs);

};
#include "BillMemento.cpp"
#endif