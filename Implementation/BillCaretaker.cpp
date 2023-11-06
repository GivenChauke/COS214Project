#ifndef BILLCARETAKER_CPP
#define BILLCARETAKER_CPP

#include "BillCaretaker.h"

BillCaretaker::BillCaretaker(){
    
}

void BillCaretaker::storeMemento( BillMemento* mem){
    bills.push_back(mem);
}
        
BillMemento* BillCaretaker::retrieveMemento(std::string customerID){
    BillMemento* rt = new BillMemento();

    for(int i=0; i < bills.size(); i++){
        if (bills[i]->getState()->getCustomerID() == customerID){
            rt = bills[i];
            return rt;
        }
    }
    
    return NULL;
}

#endif
