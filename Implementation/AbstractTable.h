#ifndef ABSTRACT_TABLE_H
#define ABSTRACT_TABLE_H
#include <iostream>

#include "TableState.h"
 #include "CustomerGroup.h"
//#include "CustomerGroup.cpp"
#include "Order.h"
#include "Review.h"
#include <vector>
using namespace std;


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
        bool occupied=false;

    public:
        void setOccupied(bool o){this->occupied=o;}//t
        bool getOccupied(){return occupied;}//t
        int getMaxPeople(){return this->maxPeople;}//t
        void setMaxPeople(int maxPeople){this->maxPeople=maxPeople;}//t
        TableState* getTableState(){return tableState;}//t
        void setTableState(TableState* state){this->tableState=state;}//t
        CustomerGroup getCustomerGroup(){return customerGroup;}//t
        void setCustomerGroup(CustomerGroup customerGroup){this->customerGroup=customerGroup;}//t
        virtual bool AddTable(AbstractTable* table)=0;
        virtual AbstractTable* SeparateTable()=0;
        int getCurrentPeople(){return currentPeople;}//t
        void setCurrentPeople(int currentPeople){this->currentPeople=currentPeople;}//t
        virtual vector<Order*> PlaceOrder();//t
        void ReceiveOrder(vector<Order*> orders);//t
        int getRandomState(){return RandomState;}//t
        void setRandomState(int RandomState){this->RandomState=RandomState;}//t
        string EnquireState();//t
        AbstractTable();//t
        virtual ~AbstractTable();//t
        bool payBill();//t
        vector<Review> ReviewFood(){return customerGroup.ReviewFood();}//t
        vector<Review> ReviewService(){return customerGroup.ReviewService();}//t


};

//#include "AbstractTable.cpp"
#endif