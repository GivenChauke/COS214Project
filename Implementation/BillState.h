#ifndef BILLSTATE_H
#define BILLSTATE_H
#include <vector>
#include<string>
using namespace std;

class BillState {
    private:
        vector<std::string> order;
        float cost;
        bool paid;
        std::string customerID;
        int tableID;
    
    public:
        void loadFromFile(std::string filename);
        void saveToFile(std::string filename);
        vector<string> getOrder();
        float getCost();
        bool getPaidStatus();
        std::string getCustomerID();
        int getTableID();
        void setOrder(vector<std::string> orders);
        void setCost(float newCost);
        void setPaid(bool pay);
        void setCustomerID(std::string custID);
        void setTableID(int tabID);

};
#include "BillState.cpp"
#endif