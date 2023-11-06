#ifndef BILLSTATE_H
#define BILLSTATE_H
#include <vector>
#include<string>
using namespace std;
#include "Order.h"
class BillState {
    private:
        Order* CopyOrder;
        float cost;
        bool paid;
        string customerID;
        int tableID;
    
    public:
    /**
     * @brief 
     * 
     * @param filename 
     */
        void loadFromFile(string filename){}
        /**
         * @brief 
         * 
         * @param filename 
         */
        void saveToFile(string filename){}
        /**
         * @brief Get the Copy Order object
         * 
         * @return Order* 
         */
        Order* getCopyOrder();
        float getCost();
        /**
         * @brief Get the Paid Status object
         * 
         * @return true 
         * @return false 
         */
        bool getPaidStatus();
        std::string getCustomerID();
        /**
         * @brief Get the Table I D object
         * 
         * @return int 
         */
        int getTableID();
        /**
         * @brief Set the Copy Order object
         * 
         * @param order 
         */
        void setCopyOrder(Order* order);
        /**
         * @brief Set the Cost object
         * 
         * @param newCost 
         */
        void setCost(float newCost);
        void setPaid(bool pay);
        /**
         * @brief Set the Customer I D object
         * 
         * @param custID 
         */
        void setCustomerID(string custID);
        /**
         * @brief Set the Table I D object
         * 
         * @param tabID 
         */
        void setTableID(int tabID);

};
//#include "BillState.cpp"
#endif