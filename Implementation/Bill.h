#ifndef BILL_H
#define BILL_H

#include "BillState.h"
#include <string>
#include<vector>
#include<map>
using namespace std;
#include "BillMemento.h"
#include "Order.h"
//class Order;
class Bill
{
    private:
        float cost;
        bool paid;
        int tableID;
        Order* CopyOrders;//Changes 
        string customerID="";
    public:
    /**
     * @brief Construct a new Bill object
     * 
     */
        Bill();
        /**
         * @brief Get the Copy Order object
         * 
         * @return Order* 
         */
        Order* getCopyOrder();
        /**
         * @brief Set the Copy Order object
         * 
         * @param order 
         */
        void setCopyOrder(Order* order);
        float getCost();
        /**
         * @brief Set the Cost object
         * 
         * @param orderCost 
         */
        void setCost(float orderCost);
        BillState* getBillState();
        /**
         * @brief Get the Bill Status object
         * 
         * @return true 
         * @return false 
         */
        bool getBillStatus();
        /**
         * @brief Set the Bill Status object
         * 
         * @param BillStatus 
         */
        void setBillStatus(bool BillStatus);
        /**
         * @brief Set the Table I D object
         * 
         * @param ID 
         */
        void setTableID(int ID){this->tableID=ID;}

        /**
         * @brief Set the Customer I D object
         * 
         * @param ID 
         */
        void setCustomerID(string ID);

        /**
         * @brief Get the Customer I D object
         * 
         * @return std::string 
         */
        std::string getCustomerID();
        int getTableID();

        /**
         * @brief 
         * 
         * @param mem 
         */
        void recoverBill(BillMemento* mem);
        BillMemento* saveState();
        /**
         * @brief 
         * 
         * 
         */
        void print();
        
};
//#include "Bill.cpp"
#endif
