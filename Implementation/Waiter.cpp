#include "Waiter.h"
#include "KitchenDepartment.h"
#include <iostream>

using namespace std;

Waiter::Waiter(int id) : Employee(id) {}

void Waiter::setMaxTables(int max){
    this->maxTables = max;
}

bool Waiter::isFullyOccupied(){
    return tables.size() >= maxTables;
}

void Waiter::assignTables(vector<Table*>& tables){
    for(Table* table: tables){
        this->tables.push_back(table);
    }
    if(tableIterator) delete tableIterator;
    tableIterator = new TableIterator(this->tables);
}

void Waiter::getReviewsForKitchenDepartment() {
    if (getDepartment()) {
        KitchenDepartment* kitchenDept = dynamic_cast<KitchenDepartment*>(getDepartment());
        if (kitchenDept) {
            kitchenDept->DisplayReviews();
        } else {
            std::cout << "Waiter can only get reviews for the Kitchen Department." << std::endl;
        }
    }
}
void Waiter::CollectOrderFromKitchen(Order* order)
{
    customerOrder.push_back(order);
}
Waiter::~Waiter() {
    for (auto it = customerOrder.begin(); it != customerOrder.end(); ++it)
    {
        customerOrder.erase(it);
    }
}
void Waiter::TakeOrder(Table* table) {
    if (table) {
        this->customerOrder = table->PlaceOrder();
        for(Order* order:customerOrder)
        {
            order->setWaiter(this);
        }
    }
}
void Waiter::TakeOrder(Order* order) {

    order->setWaiter(this);

}
void Waiter::deliverOrders()
{
    //iterate tables and call //call void ReceiveOrder(vector<Order> orders){customerGroup.receiveOrder(orders);};
}
