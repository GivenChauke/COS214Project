#include "Bill.h"

Bill::Bill(){
    cost = 0.0;
    paid = false;
    tableID = NULL;
    state = NULL;
}

vector<std::string> Bill::getOrder(){
    return orders;
}

void Bill::setOrder(vector<std::string> order){
    for (int i = 0; i < order.size(); i++)  
        this->orders.push_back(order[i]); 
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

void Bill::setID(std::string id, int tableID){
    
}

std::string Bill::getCustomerID(){
    return "";
}

int Bill::getTableID(){
    return tableID;
}

//not sure how to set customerID since its a string in BillState but a vector in Bill
void Bill::recoverBill(BillMemento* mem){
    delete orders;
    delete customers;
    cost = mem.getState().getCost();
    paid = mem.getState().getPaidStatus();
    tableID = mem.getState().getTableID();
    for(int i = 0; i < mem.getState().getOrder(); i++){
        orders.push_back(mem.getState().getOrder()[i]);
        //this is going to break
    }
}

map<std::string, BillMemento*> Bill::saveState(){

}