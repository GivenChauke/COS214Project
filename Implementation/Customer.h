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
    private:
        string ID;
        CustomerState* state;

    public:
        string getID(){return ID;};//t
        void setID(string ID){this->ID=ID;};//t
        void setState(CustomerState* state){this->state=state;};//t
        CustomerState* getState(){return state;};//t
        string GiveComment_Food();//t
        string GiveComment_Service();//t
        int GiveRating_Food();//t
        int GiveRating_Service();//t
        Customer(string name){ID=name;};//t
        Customer();//t
        void receiveOrder(Order* order);//check
        Order* PlaceOrder();//t
};

//#include "Customer.cpp"

#endif