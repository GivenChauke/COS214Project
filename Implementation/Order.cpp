#include "Order.h"


Order::Order(){
    waiter = nullptr;
    table = nullptr;
    orderStatus = nullptr;
    bill = nullptr;
}

Order::~Order(){
    if(waiter!= nullptr) delete waiter;
    if(bill != nullptr) delete bill;
    if(orderStatus != nullptr) delete orderStatus;
    if(table != nullptr) delete table;
    for(FoodItem* item: items){
        if(item != nullptr) delete item;
    }
    for(Food* f: food){
        if(f != nullptr){
            delete f;
        }
    }
}

std::vector<FoodItem*> Order::getItems(){
    return items;
}

Table* Order::getTable(){
    return table;
}

void Order::setTable(Table* table){
    if(this->table != nullptr) delete this->table;
    this->table = table;
}

Employee* Order::getWaiter(){
    return waiter;
}

void Order::setWaiter(Employee* w){
    if(waiter != nullptr) delete waiter;
    waiter = w;
}

void Order::setBill(Bill* bill){
    if(this->bill != nullptr) delete this->bill;
    this->bill = bill;
}

Bill* Order::getBill(){
    return bill;
}

void Order:: toReadyStatus(){
    deallocateStatus();
    orderStatus = new Ready();
}
void Order::toReceivedStatus(){
    deallocateStatus();
    orderStatus = new Received();
}
void Order::toProcessingStatus(){
    deallocateStatus();
    orderStatus = new Processing();
}

std::string Order::getOrderStatus(){
    if(orderStatus != nullptr){
        return orderStatus->getStatus();
    } else{
        return "undefined order status";
    }
}

void Order::setItems(std::vector<FoodItem*> items){
    this->items = items;
}

void Order::addFood(Food* f){
    if(f == nullptr) return;
    food.push_back(f);
}

std::vector<Food*> Order::getFood(){
    return food;
}







