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
        string getID(){return ID;};
        void setID(string ID){this->ID=ID;};
        void setState(CustomerState* state){this->state=state;};
        CustomerState* getState(){return state;};
        string GiveComment_Food();
        string GiveComment_Service();
        int GiveRating_Food();
        int GiveRating_Service();
        Customer(string name){ID=name;};
        Customer();
        void receiveOrder(Order* order);//check
        Order* PlaceOrder();
};

//#include "Customer.cpp"

#endif