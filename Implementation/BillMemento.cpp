#ifndef BILLMEMENTO_CPP
#define BILLMEMENTO_CPP

#include "BillMemento.h"

BillState* BillMemento::getState(){
    return state;
}

void BillMemento::setState(BillState* bs){
    this->state=bs;
}

#endif
