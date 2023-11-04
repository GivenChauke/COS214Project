#ifndef ORDER_H
#define ORDER_H

#include <string>
#include <vector>
#include "OrderStatus.h"
#include "Menu.h"
// #include "AbstractTable.h"

class AbstractTable;


/**
 * @brief the destructor deallocates ALL memory. 
 * So be mindful when using setter functions since only shallow copies are made
 *
 * All getters return nullptr when variable is not initialized
 * 
 * 
 */

//#include "Bill.h"
#include "Employee.h"

class Bill;
class Order{

    private:
        OrderStatus* orderStatus;
        std::vector<FoodItem*> items;
        Bill* bill;
        AbstractTable* table;
        Employee* waiter;
        void deallocateStatus(){
            if(orderStatus != nullptr) delete orderStatus;
        }

    public:
        Order();
        Order(Order& r);
        ~Order();
        std::vector<FoodItem*> getItems();
        void setItems(std::vector<FoodItem*>);
        AbstractTable* getTable();
        void setTable(AbstractTable*);
        Employee* getWaiter();
        void setWaiter(Employee*);
        void setBill(Bill*);
        Bill* getBill();
        std::string getOrderStatus();
        void toReadyStatus();
        void toReceivedStatus();
        void toProcessingStatus();

};
//#include "Order.cpp"
#endif