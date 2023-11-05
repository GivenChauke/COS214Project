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
    /**
     * @brief Get the Customers object
     * 
     * @return vector<Customer> 
     */
        vector<Customer> getCustomers(){return customers;}//T
        /**
         * @brief Set the Customers object
         * 
         * @param customer 
         */
        void setCustomers(vector<Customer> customer){this->customers=customer;}//T
        int getRandomState(){return RandomState;};//t
        /**
         * @brief Set the Random State object
         * 
         * @param RandomState 
         */
        void setRandomState(int RandomState){this->RandomState=RandomState;}//t
        int NumOfCustomer();//t
        /**
         * @brief 
         * 
         * @param index 
         * @return Customer 
         */
        Customer CustomerAt(int index);//t
        vector<Bill*> mergeBill();
        /**
         * @brief 
         * 
         * @param customer 
         * @return true 
         * @return false 
         */
        bool addCustomer(Customer customer);//t
        CustomerGroup();//t
        /**
         * @brief 
         * 
         * @param orders 
         */
        void receiveOrder(vector<Order*> orders);
        bool PayBill();//t
        /**
         * @brief 
         * 
         * @return vector<Review> 
         */
        vector<Review> ReviewFood();//t
        /**
         * @brief 
         * 
         * @return vector<Review> 
         */
        vector<Review> ReviewService();//t
        vector<Order*> PlaceOrder();//t
        /**
         * @brief prints customers;
         * 
         */
        void print();


};

//#include "CustomerGroup.cpp"
#endif