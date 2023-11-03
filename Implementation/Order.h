#ifndef ORDER_H
#define ORDER_H

#include <string>
#include <vector>
#include "Employee.h"
#include "OrderStatus.h"
#include "Ready.h"
#include "Processing.h"
#include "Received.h"
#include "Menu.h"
// #include "Food.h"

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
// class Employee;
class Waiter;
class Food;

class Order{

    private:
        OrderStatus* orderStatus;
        std::vector<FoodItem*> items;
        std::vector<Food*> food;
        Bill* bill;
        Table* table;
        Employee* waiter;
        void deallocateStatus(){
            if(orderStatus != nullptr) delete orderStatus;
        }

    public:
    /**
     * @brief Construct a new Order object and sets all attributes to null
     * 
     */
        Order();
        /**
         * @brief Destroy the Order object, deallocating all memory associated with the object
         * 
         */
        ~Order();
        /**
         * @brief Get the Items object
         * 
         * @return std::vector<FoodItem*> 
         */
        std::vector<FoodItem*> getItems();
        /**
         * @brief Set the Items object
         * 
         */
        void setItems(std::vector<FoodItem*>);
        /**
         * @brief Get the Table object
         * 
         * @return Table* 
         */
        Table* getTable();
        /**
         * @brief Set the Table object
         * 
         */
        void setTable(Table*);
        /**
         * @brief Get the Waiter object.
         * 
         * @return Employee* 
         */
        Employee* getWaiter();
        /**
         * @brief Set the Waiter object
         * 
         */
        void setWaiter(Employee*);
        /**
         * @brief Set the Bill object
         * 
         */
        void setBill(Bill*);
        /**
         * @brief Get the Bill object
         * 
         * @return Bill* 
         */
        Bill* getBill();
        /**
         * @brief Get the Food object
         * 
         * @return std::vector<Food*> 
         */
        std::vector<Food*> getFood();
        /**
         * @brief Adds a food item to the vector of food returned to the customer
         * 
         */
        void addFood(Food*);
        /**
         * @brief Get the status of the order
         * 
         * @return std::string 
         */
        std::string getOrderStatus();
        /**
         * @brief Changes status of order to Ready
         * 
         */
        void toReadyStatus();
        /**
         * @brief Changes status of order to Received
         * 
         */
        void toReceivedStatus();
        /**
         * @brief Changes status of order to Processing
         * 
         */
        void toProcessingStatus();

};

#endif