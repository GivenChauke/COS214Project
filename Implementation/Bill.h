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
        Bill();
        Order* getCopyOrder();
        void setCopyOrder(Order* order);
        float getCost();
        void setCost(float orderCost);
        BillState* getBillState();
        bool getBillStatus();
        void setBillStatus(bool BillStatus);
        void setTableID(int ID){this->tableID=ID;}
        void setCustomerID(string ID);
        std::string getCustomerID();
        int getTableID();
        void recoverBill(BillMemento* mem);
        BillMemento* saveState();
        void print();
        
};
//#include "Bill.cpp"
#endif