#ifndef CUSTOMER_GROUP_H
#define CUSTOMER_GROUP_H
#include <vector>
#include "Customer.h"
#include <iostream>


#include "Order.h"
#include "Review.h"

using namespace std;
class CustomerGroup
{
    protected:
        vector<Customer> customers;
        int RandomState;//for what
        vector<Order*> orders;
    public:
        vector<Customer> getCustomers(){return customers;}//T
        void setCustomers(vector<Customer> customer){this->customers=customer;}//T
        int getRandomState(){return RandomState;};//t
        void setRandomState(int RandomState){this->RandomState=RandomState;}//t
        int NumOfCustomer();//t
        Customer CustomerAt(int index);//t
        vector<Bill*> mergeBill();
        bool addCustomer(Customer customer);//t
        CustomerGroup();//t
        void receiveOrder(vector<Order*> orders);
        bool PayBill();//t
        vector<Review> ReviewFood();//t
        vector<Review> ReviewService();//t
        vector<Order*> PlaceOrder();//t
        void print();


};

//#include "CustomerGroup.cpp"
#endif