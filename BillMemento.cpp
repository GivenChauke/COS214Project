#include "BillMemento.h"

BillState BillMemento::getState(){
    return state;
}

void BillMemento::setState(BillState bs){
    state.setCost(bs.getCost());
    state.setCustomerID(bs.getCustomerID);
    state.setOrder(bs.getOrder());
    state.setPaid(bs.getPaidStatus());
    state.setTableID(bs.getTableID());
}