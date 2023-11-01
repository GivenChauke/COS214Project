#ifndef ORDER_H
#define ORDER_H

#include <string>
#include <vector>

#include "OrderStatus.h"
#include "Ready.h"
#include "Processing.h"
#include "Received.h"

/**
 * @brief the destructor deallocates ALL memory. 
 * So be mindful when using setter functions since only shallow copies are made
 *
 * All getters return nullptr when variable is not initialized
 * 
 * 
 */

class Bill;
class Table;
class Employee;
class Waiter;

class Order{

    private:
        OrderStatus* orderStatus;
        std::vector<std::string> items;
        Bill* bill;
        Table* table;
        Employee* waiter;
        void deallocateStatus(){
            if(orderStatus != nullptr) delete orderStatus;
        }

    public:
        Order(); // 
        ~Order(); 
        std::vector<std::string> getItems();
        void setItems(std::vector<std::string>);
        Table* getTable();
        void setTable(Table*);
        Employee* getWaiter();
        void setWaiter(Employee*);
        void setBill(Bill*);
        Bill* getBill();
        std::string getOrderStatus();
        void toReadyStatus();
        void toReceivedStatus();
        void toProcessingStatus();

};

#endif