#ifndef ABSTRACT_TABLE_CPP
#define ABSTRACT_TABLE_CPP
#include "AbstractTable.h"
#include <iostream>
using namespace std;
#include "NotOccupied.h"
#include "ReadyToOrder.h"
#include "NotReadyToOrder.h"
#include "Order.h"

int AbstractTable::counter=0;
AbstractTable::AbstractTable()
{
    tableState= new NotOccupied();
    this->currentPeople=0;
    maxPeople=5;
    srand((unsigned) time(NULL));
    int random=(rand()% customerGroup->NumOfCustomer());
    RandomState=random;
    if(RandomState==0)
    {
        tableState= new ReadyToOrder();
    }
    else{
        tableState= new NotReadyToOrder();
    }
    tableID=counter++;
}

bool AbstractTable::payBill()
{
    return customerGroup->PayBill();
}

AbstractTable::~AbstractTable()
{
    delete  tableState;
}


string AbstractTable::EnquireState()
{
    if(RandomState != 0)
    {
        RandomState--;
        return tableState->getStatus();
    }
    tableState= new ReadyToOrder();
    return tableState->getStatus();
}
void AbstractTable::ReceiveOrder(vector<Order*> orders)
{
    this->customerGroup.receiveOrder(orders);
}

vector<Order*> AbstractTable::PlaceOrder()
{
    vector<Order*>jjr = this->customerGroup.PlaceOrder();

    for(int i=0;i<jjr.size(); i++)
    {
        jjr[i]->setTable(this);
    }
    return  jjr;
}

#endif