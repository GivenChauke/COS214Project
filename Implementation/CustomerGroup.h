#ifndef CUSTOMER_GROUP_H
#define CUSTOMER_GROUP_H
#include <vector>
#include "Customer.h"
#include <iostream>
using namespace std;

class Bill;
class Order;
class Review;
class CustomerGroup
{
    protected:
        vector<Customer*> customers;
        int RandomState;//for what
        vector<Order*> orders;
    public:
        vector<Customer*> getCustomers(){return customers;}
        void setCustomers(vector<Customer*> customer){this->customers=customer;}
        int getRandomState(){return RandomState;};
        void setRandomState(int RandomState){this->RandomState=RandomState;}
        int NumOfCustomer();
        Customer* CustomerAt(int index);
        vector<Bill*> mergeBill();
        bool addCustomer(Customer* customer);
        CustomerGroup();
        void receiveOrder(vector<Order*> orders);
        bool PayBill();
        vector<Review*> ReviewFood();
        vector<Review*> ReviewService();
        vector<Order*> PlaceOrder();


};

#include "CustomerGroup.cpp"
#endif