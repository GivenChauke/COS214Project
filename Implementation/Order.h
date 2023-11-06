#ifndef ORDER_H
#define ORDER_H
using namespace std;
#include <string>
#include <vector>
#include "OrderStatus.h"
#include "Ready.h"
#include "Processing.h"
#include "Received.h"
#include "Menu.h"
#include "Food.h"
/**
 * @brief the destructor deallocates ALL memory. 
 * So be mindful when using setter functions since only shallow copies are made
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
        std::vector<FoodItem*> items;
        std::vector<Food*> food;
        Bill* bill;
        Table* table;
        Waiter* waiter;//change it back to employee
        void deallocateStatus(){
            if(orderStatus != nullptr) delete orderStatus;
        }

    public:
        Order(); // 
        ~Order(); 
        std::vector<FoodItem*> getItems();
        void setItems(std::vector<FoodItem*>);
        void addFood(Food* );
        vector<Food*> getFood();
        Table* getTable();
        void setTable(Table*);
        Waiter* getWaiter();    //change it back to employee
        void setWaiter(Waiter*);//change it back to Employee
        void setBill(Bill*);
        Bill* getBill();
        std::string getOrderStatus();
        void toReadyStatus();
        void toReceivedStatus();
        void toProcessingStatus();
        std::string toString();
};