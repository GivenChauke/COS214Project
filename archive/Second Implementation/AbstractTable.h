#ifndef ABSTRACT_TABLE_H
#define ABSTRACT_TABLE_H
#include <iostream>

#include "TableState.h"
#include "CustomerGroup.h"
#include "Order.h"
#include "Review.h"
#include <vector>

using namespace std;


class AbstractTable
{
    protected:
        int maxPeople;
        TableState* tableState;
        CustomerGroup* customerGroup;
        int currentPeople;
        int RandomState;
        static int counter;
        int tableID;
        bool occupied=false;

    public:
    /**
     * @brief Get the Table I D object
     *
     *
     * @return int
     */
        int getTableID(){return tableID;}
    /**
     * @brief Set the Table ID
     * @param ID seting tableID
     * @param ID
     */
        void setTableID(int ID){this->tableID=ID;}
        /**
         * @brief Set the Occupied object
         * @param o set occupied attribute
         * @param o
         */
        void setOccupied(bool o){this->occupied=o;}//t
        /**
         * @brief Get the Occupied object
         *
         * @return true
         * @return false
         */
        bool getOccupied(){return occupied;}//t
        /**
         * @brief Get the MaxPeople allowed in on the table
         *
         * @return int
         */
        int getMaxPeople(){return this->maxPeople;}//t
        /**
         * @brief Set the Max People object
         *
         * @param maxPeople
         */
        bool visitTable();
        void setMaxPeople(int maxPeople){this->maxPeople=maxPeople;}//t
        TableState* getTableState(){return tableState;}//t
        void setTableState(TableState* state){this->tableState=state;}//t
        CustomerGroup* getCustomerGroup(){return customerGroup;}//t
        void setCustomerGroup(CustomerGroup* customerGroup){this->customerGroup=customerGroup;}//t
        virtual bool AddTable(AbstractTable* table)=0;
        virtual AbstractTable* SeparateTable()=0;
        int getCurrentPeople(){return currentPeople;}//t
        void setCurrentPeople(int currentPeople){this->currentPeople=currentPeople;}//t
        virtual vector<Order*> PlaceOrder();//t
        void ReceiveOrder(vector<Order*> orders);//t
        int getRandomState();//t
        void setRandomState(int RandomState){this->RandomState=RandomState;}//t
        string EnquireState();//t
        AbstractTable();//t
        virtual ~AbstractTable();//t
        bool payBill();//t
        vector<Review> ReviewFood(){return customerGroup->ReviewFood();}//t
        vector<Review> ReviewService(){return customerGroup->ReviewService();}//t


};

//#include "AbstractTable.cpp"
#endif
