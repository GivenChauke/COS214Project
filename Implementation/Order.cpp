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
    std::cout<<"Before seg fault2.0"<<std::endl;
    if (!items.empty()) {
    items.clear(); // Clear the vector after deleting the items
    if(!food.empty()) food.clear();
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

Waiter* Order::getWaiter(){//back to employee
    return waiter;
}

void Order::setWaiter(Waiter* w){
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

void Order::setItems(std::vector<FoodItem*> items) {
this->items = items;
}

void Order::addFood(Food* f){
    food.push_back(f);
}
vector<Food*> Order::getFood(){
    return food;
}
std::string Order::toString() {
    std::string result = "Order Details:\n";
    
    if (!items.empty()) {
        result += "Order Food Items:\n";
        for (const FoodItem* item : items) {
            result += "- \x1B[31m" + item->name + " ($" + std::to_string(item->price) + ")\x1B[0m\n";  // Red color for item name
        }
    } else {
        result += "No food items in the order.\n";
    }

    if (!food.empty()) {
        result += "Food available in order: \n";
        for (Food* f : food) {
            result += "- \x1B[33m" + f->getName() + "\x1B[0m\n";  // Yellow color for food name
        }
    } else {
        result += "Food not yet prepared for the order.\n";
    }

    return result;
}



