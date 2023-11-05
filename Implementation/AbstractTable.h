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
        void setMaxPeople(int maxPeople){this->maxPeople=maxPeople;}//t
        /**
         * @brief Get the Table State object99+
         * 
         * @return TableState* 
         */
        TableState* getTableState(){return tableState;}//t
        /**
         * @brief Set the Table State object
         * 
         * @param state 
         */
        void setTableState(TableState* state){this->tableState=state;}//t
        /**
         * @brief Get the Customer Group object
         * 
         * @return CustomerGroup 
         */
        CustomerGroup getCustomerGroup(){return customerGroup;}//t
        /**
         * @brief Set the Customer Group object
         * 
         * @param customerGroup 
         */
        void setCustomerGroup(CustomerGroup customerGroup){this->customerGroup=customerGroup;}//t
        /**
         * @brief 
         * 
         * @param table 
         * @return true 
         * @return false 
         */
        virtual bool AddTable(AbstractTable* table)=0;
        /**
         * @brief 
         * 
         * @return AbstractTable* 
         */
        virtual AbstractTable* SeparateTable()=0;
        /**
         * @brief Get the Current People object
         * 
         * @return int 
         */
        int getCurrentPeople(){return currentPeople;}//t
        /**
         * @brief Set the Current People object
         * 
         * @param currentPeople 
         */
        void setCurrentPeople(int currentPeople){this->currentPeople=currentPeople;}//t
        /**
         * @brief 
         * 
         * @return vector<Order*> 
         */
        virtual vector<Order*> PlaceOrder();//t
        /**
         * @brief 
         * 
         * @param orders 
         */
        void ReceiveOrder(vector<Order*> orders);//t
        int getRandomState(){return RandomState;}//t
        /**
         * @brief Set the Random State object
         * 
         * @param RandomState 
         */
        void setRandomState(int RandomState){this->RandomState=RandomState;}//t
        string EnquireState();//t
        AbstractTable();//t
        /**
         * @brief Destroy the Abstract Table object
         * 
         */
        virtual ~AbstractTable();//t
        bool payBill();//t
        /**
         * @brief 
         * 
         * @return vector<Review> 
         */

        vector<Review> ReviewFood(){return customerGroup.ReviewFood();}//t
        /**
         * @brief 
         * 
         * @return vector<Review> 
         */
        vector<Review> ReviewService(){return customerGroup.ReviewService();}//t


};

//#include "AbstractTable.cpp"
#endif