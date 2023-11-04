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
        void loadFromFile(string filename){}
        void saveToFile(string filename){}
        Order* getCopyOrder();
        float getCost();
        bool getPaidStatus();
        std::string getCustomerID();
        int getTableID();
        void setCopyOrder(Order* order);
        void setCost(float newCost);
        void setPaid(bool pay);
        void setCustomerID(string custID);
        void setTableID(int tabID);

};
//#include "BillState.cpp"
#endif