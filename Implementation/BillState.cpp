#ifndef BILLSTATE_CPP
#define BILLSTATE_CPP

#include<string>
#include "BillState.h"
#include "Order.h"

using namespace std;
//order clas error

// void BillState::loadFromFile(string filename){

// }

// void BillState::saveToFile(string filename){

// }

Order* BillState::getCopyOrder()
{
    return CopyOrder;
}

float BillState::getCost(){
    return cost;
}

bool BillState::getPaidStatus(){
    return paid;
}

string BillState::getCustomerID(){
    return customerID;
}

int BillState::getTableID(){
    return tableID;
}

void BillState::setCopyOrder(Order* order){
    CopyOrder= new Order(*order);//donry worry
}

void BillState::setCost(float newCost){
    cost = newCost;
}

void BillState::setPaid(bool pay){
    paid = pay;
}

void BillState::setCustomerID(std::string custID){
    customerID = custID;
}

void BillState::setTableID(int tabID){
    tableID = tabID;
}

#endif
