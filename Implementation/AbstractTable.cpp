#ifndef ABSTRACT_TABLE_CPP
#define ABSTRACT_TABLE_CPP
#include "AbstractTable.h"
#include <iostream>
using namespace std;
#include <ctime>
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
    int random=(rand()% 10);
    RandomState=random;
    if(RandomState==0)
    {
        tableState= new ReadyToOrder();

    }
    else{
        tableState= new NotReadyToOrder();
    }
    tableState->setTable(this);
    tableID=counter++;
}

bool AbstractTable::visitTable(){
    if(customerGroup){
        return tableState->action();
    }
}

bool AbstractTable::payBill()
{
    return customerGroup->PayBill();
}

AbstractTable::~AbstractTable()
{
    delete  tableState;
}

int AbstractTable::getRandomState(){
    if(customerGroup == nullptr){
        return RandomState;
    }else return customerGroup->getRandomState();
}


string AbstractTable::EnquireState()
{
    //if(RandomState != 0)
    //{
    //    RandomState--;
    //    return tableState->getStatus();
    //}
    //tableState= new ReadyToOrder();
    tableState = tableState == nullptr ? new NotOccupied(): tableState;
    tableState->setTable(this);

    return tableState->getStatus();
}
void AbstractTable::ReceiveOrder(vector<Order*> orders)
{
    this->customerGroup->receiveOrder(orders);
}

vector<Order*> AbstractTable::PlaceOrder()
{
    vector<Order*>jjr = this->customerGroup->PlaceOrder();

    for(int i=0;i<jjr.size(); i++)
    {
        jjr[i]->setTable(this);
    }
    return  jjr;
}

#endif
