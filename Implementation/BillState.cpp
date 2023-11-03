#ifndef BILLSTATE_CPP
#define BILLSTATE_CPP

#include "BillState.h"

void BillState::loadFromFile(std::string filename){

}

void BillState::saveToFile(std::string filename){

}

vector<string> BillState::getOrder(){
    return order;
}

float BillState::getCost(){
    return cost;
}

bool BillState::getPaidStatus(){
    return paid;
}

std::string BillState::getCustomerID(){
    return customerID;
}

int BillState::getTableID(){
    return tableID;
}

void BillState::setOrder(vector<std::string> orders){
    for(int i = 0; i < orders.size(); i++){
        order.push_back(orders[i]);
    }
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