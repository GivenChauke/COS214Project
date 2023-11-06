#ifndef BILL_H
#define BILL_H

#include "BillState.h"
#include "Customer.h"
#include <string>
#include<vector>

class Bill {
    private:
        float cost;
        bool paid;
        int tableID;
        BillState state;
        vector<std::string> orders(10);
        vector<std::string> customers(10);
    public:
        Bill();
        vector<std::string> getOrder();
        void setOrder(vector<std::string> order);
        float getCost();
        void setCost(float orderCost);
        bool getBillStatus();
        void setBillStatus(bool BillStatus);
        void setID(std::string id, int tableID);
        std::string getCustomerID();
        int getTableID();
        void recoverBill(BillMemento* mem);
        map<std::string, BillMemento*> saveState();
        
}