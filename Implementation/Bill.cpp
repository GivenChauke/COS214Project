#ifndef BILL_CPP
#define BILL_CPP
#include "Bill.h"
#include "BillMemento.h"

//2order class Error

Bill::Bill(){
    cost = 0.0;
    paid = false;
    CopyOrders=NULL;
   // state=NULL;
   // billS
  // customerID="666";
}

Order* Bill::getCopyOrder()
{
    return CopyOrders;
}

void Bill::setCopyOrder(Order* order){
    this->CopyOrders= new Order(*order);//dont worry
}


float Bill::getCost(){
    return cost;
}

void Bill::setCost(float orderCost){
    cost = orderCost;
}

bool Bill::getBillStatus(){
    return paid;
}



void Bill::setBillStatus(bool BillStatus){
    paid = BillStatus;
}



std::string Bill::getCustomerID(){
    return customerID;
}

int Bill::getTableID(){
    return tableID;
}

//not sure how to set customerID since its a string in BillState but a vector in Bill
void Bill::recoverBill(BillMemento* mem)
{
   
    cost = mem->getState()->getCost();

    paid = mem->getState()->getPaidStatus();
    tableID = mem->getState()->getTableID();
    if((mem->getState()->getCopyOrder()) != NULL)
        CopyOrders= new Order(*(mem->getState()->getCopyOrder()));//dont wory
    else
        CopyOrders=NULL;
}
void Bill::print()
{
    cout<<"COST "<<cost<<endl;
    cout<<"IS IT PAID "<<paid<<endl;
    cout<<"TableID "<<tableID<<endl;
    cout<<"CUSTOMER ID "<<customerID<<endl;
}

void Bill::setCustomerID(string ID)
{
    //cout<<ID<<" defv\n";
    this->customerID=ID;
}

BillMemento* Bill::saveState()
{

    BillMemento* newState = new BillMemento();
    newState->setState(this->getBillState());
    return newState;

}



BillState* Bill::getBillState(){
    BillState* rt= new BillState();
    rt->setCost(cost);
    rt->setCustomerID(customerID);
    rt->setPaid(paid);
    rt->setTableID(tableID);
    rt->setCopyOrder(CopyOrders);
    return rt;
}

#endif