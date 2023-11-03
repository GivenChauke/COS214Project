#ifndef BILLMEM_H
#define BILLMEM_H

#include <string>
#include "BillState.h"

class BillMemento {
    private:
        BillState state;
    
    public:
        BillState getState();
        void setState(BillState bs);

};
#endif