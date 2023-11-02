#ifndef ABSTRACTTABLE_H
#define ABSTRACTTABLE_H
#include <iostream>
using namespace std;
#include "TableState.h"
#include "CustomerGroup.h"
class AbstractTable
{
    protected:
        int maxPeople;
        TableState* tableState;
        CustomerGroup customerGroup;
        int currentPeople;
        int RandomState;
        static int counter;
        int tableID;
    public:
        int getMaxPeople(){return this->maxPeople;}
        void setMaxPeople(int maxPeople){this->maxPeople=maxPeople;}
        TableState* getTableState(){return tableState;}
        void setTableState(TableState* state){this->tableState=state;}
        CustomerGroup getCustomerGroup(){return customerGroup;}
        void setCustomerGroup(CustomerGroup customerGroup){this->customerGroup=customerGroup;}
        virtual bool AddTable(AbstractTable* table)=0;
        virtual AbstractTable* SeparateTable()=0;
        int getCurrentPeople(){return currentPeople;}
        void setCurrentPeople(int currentPeople){this->currentPeople=currentPeople;}
        virtual vector<Order> PlaceOrder();
        void ReceiveOrder(vector<Order> orders){customerGroup.receiveOrder(orders);};
        int getRandomState(){return RandomState;}
        void setRandomState(int RandomState){this->RandomState=RandomState;}
        string EnquireState();
        AbstractTable();
        virtual ~AbstractTable();
        bool payBill();
        vector<Review> ReviewFood(){return customerGroup.ReviewFood();}
        vector<Review> ReviewService(){return customerGroup.ReviewService();}


};
int AbstractTable::counter=0;
#endif