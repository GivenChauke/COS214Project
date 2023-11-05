#ifndef Customer_H
#define Customer_H
#include "Customer.h"
#include <iostream>
#include <string>
using namespace std;
#include "CustomerState.h"
#include"Order.h"


class Customer
{
    //srand((unsigned) time(NULL));
    private:
        string ID;
        CustomerState* state;
    public:
        static int SeedValue;

    public:
    /**
     * @brief 
     * 
     * @return string 
     */
        string getID(){return ID;};//t
        /**
         * @brief 
         * 
         * @param ID 
         */
        void setID(string ID){this->ID=ID;};//t
        /**
         * @brief Set the State object
         * 
         * @param state 
         */
        void setState(CustomerState* state){this->state=state;};//t
        /**
         * @brief Get the State object
         * 
         * @return CustomerState* 
         */
        CustomerState* getState(){return state;};//t
        /**
         * @brief 
         * 
         * @return string 
         */
        string GiveComment_Food();//t
        /**
         * @brief 
         * 
         * @return string 
         */
        string GiveComment_Service();//t
        /**
         * @brief 
         * 
         * @return int 
         */
        int GiveRating_Food();//t
        /**
         * @brief 
         * 
         * @return int 
         */
        int GiveRating_Service();//t
        /**
         * @brief Construct a new Customer object
         * 
         * @param name 
         */
        Customer(string name){ID=name;};//t
        /**
         * @brief Construct a new Customer object
         * 
         */
        Customer();//t
        /**
         * @brief 
         * 
         * @param order 
         */
        void receiveOrder(Order* order);//check
        /**
         * @brief 
         * 
         * @return Order* 
         */
        Order* PlaceOrder();//t
};

//#include "Customer.cpp"

#endif