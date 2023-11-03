#ifndef CUSTOMER_GROUP_CPP
#define CUSTOMER_GROUP_CPP
#include "CustomerGroup.h"
#include <iostream>
#include<vector>
using namespace std;

class Bill;
class Review;

bool CustomerGroup::addCustomer(Customer customer)
{
    vector<Customer>::iterator iter=this->customers.begin();
    
    this->customers.insert(iter, customer);
}

CustomerGroup::CustomerGroup()
{
    
}


Customer CustomerGroup::CustomerAt(int index)
{
    //error condition/you need to make sure that you dont go outofbound
    // if(index>=this->customers.size())
    // {
    //     return 
    // }
    return customers.at(index);
}

int CustomerGroup::NumOfCustomer()
{return customers.size();}

void CustomerGroup::receiveOrder(vector<Order> orders)
{
    for(int t=0; t<this->customers.size(); t++)
    {
       
        for( int i=0; i<orders.size(); i++)
        {
           /* if(orders.at(i).getCustomerID()==customers.at(t).getCustomerID())
           {

                customers.at(t).receiveOrder(orders.at(i));
    
           }

           */
        }
    }
    this->orders=orders;
}


vector<Bill> CustomerGroup::mergeBill()
{
    vector<Bill> bills;
    srand((unsigned) time(NULL));
    int random=(rand()%orders.size()) +1;
    /*
    int billIndex=0;
    int difference= orders.size()-random;
        for(int i=0; i<random; i++)
        {
            if(i==0)
            {

                bills.insert(bills.begin(), order.at( billIndex++).getBill());
                for(int b=0; b<difference; b++)
                {
                    bills.insert(bills.begin(), order.at( billIndex++).getBill());
                }
            }
            else{
                bills.insert(bills.begin(), order.at( billIndex++).getBill());

            }
        }
    
    */

   return bills;

}


bool CustomerGroup::PayBill()
{
    vector<Bill> bills=mergeBill();

    for(int i=0; i<bills.size(); i++)
    {
      //  bills.at(i).setBill(true);
    }
    return true;
}


vector<Review> CustomerGroup::ReviewFood()
{
    //vector<Review> Reviews;
   //
   /*
    for(int i=0; i<order.size(); i++)
    {
        Review note;
        note.ReviewComment=customers.at(i).GiveComment();
        note.Rating=customers.at(i).GiveComment();
        Reviews.insert(Reviews.begin(), note);
    }
    
   */
  

}

vector<Review> CustomerGroup::ReviewService()
{
    //vector<Review> Reviews;
   //
   /*
    for(int i=0; i<order.size(); i++)
    {
        Review note;
        note.ReviewComment=customers.at(i).GiveComment();
        note.Rating=customers.at(i).GiveComment();
        Reviews.insert(Reviews.begin(), note);
    }
    
   */
  

}


vector<Order* > CustomerGroup::PlaceOrder()
{
    vector<Order*> rt;
    for(int i=0; i<customers.size(); i++)
    {
        rt.push_back(customers.at(i).PlaceOrder());
    }

    return rt;
}
#endif