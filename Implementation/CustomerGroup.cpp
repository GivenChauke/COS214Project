#ifndef CUSTOMER_GROUP_CPP
#define CUSTOMER_GROUP_CPP
#include "CustomerGroup.h"
#include <iostream>
#include<vector>
using namespace std;

#include "Bill.h"
#include "Review.h"


bool CustomerGroup::addCustomer(Customer customer)
{
    vector<Customer>::iterator iter=this->customers.begin();
    
    this->customers.insert(iter, customer);

    return true;
}

CustomerGroup::CustomerGroup()
{
    
}

void CustomerGroup::print()
{
    for(int i=0; i<customers.size(); i++)
    {
        cout<<customers[i].getID()<<endl;
    }
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

void CustomerGroup::receiveOrder(vector<Order*> orders)
{
    for(int t=0; t<this->customers.size(); t++)
    {
       
        for( int i=0; i<orders.size(); i++)
        {
        //    if(orders.at(i)->getBill()->getCustomerID==customers.at(t).getID())
        //    {

        //         //customers.at(t).receiveOrder(orders.at(i));
    
        //    }

           
        }
    }
    this->orders.clear();
    this->orders.insert(this->orders.begin(), orders.begin(), orders.end());
}


vector<Bill*> CustomerGroup::mergeBill()
{
     vector<Bill*> bills;
    srand((unsigned) time(NULL));
    int random=(rand()%orders.size()) +1;
    
    int billIndex=0;
    int difference= orders.size()-random;
       for(int i=0; i<random; i++)
        {
            if(i==0)
            {

                bills.push_back(orders.at( billIndex++)->getBill());
                for(int b=0; b<difference; b++)
                {
                    bills.push_back(orders.at( billIndex++)->getBill());
                }
            }
            else{
                bills.push_back(orders.at( billIndex++)->getBill());

            }
        }
    
    


   return bills;

}


bool CustomerGroup::PayBill()
{
    vector<Bill*> bills=mergeBill();

    for(int i=0; i<bills.size(); i++)
    {
       bills.at(i)->setBillStatus(true);
    }
    return true;
}


vector<Review> CustomerGroup::ReviewFood()
{
    vector<Review> Reviews;
   //
   
    for(int i=0; i<NumOfCustomer(); i++)
    {
         Review note;
         note.setReviewComment(customers.at(i).GiveComment_Food());
         note.setRating(customers.at(i).GiveRating_Food());
         Reviews.push_back( note);
    }
    
   
  
  return Reviews;
}

vector<Review> CustomerGroup::ReviewService()
{
    vector<Review> Reviews;
   //
   
    for(int i=0; i<orders.size(); i++)
    {
        Review note;
        note.setReviewComment(customers.at(i).GiveComment_Food());
        note.setRating(customers.at(i).GiveRating_Service());
                Reviews.push_back( note);

    }
    
   
  
  return Reviews;
}


vector<Order*> CustomerGroup::PlaceOrder()
{
    vector<Order*> rt;
    for(int i=0; i<customers.size(); i++)
    {
        rt.push_back(customers.at(i).PlaceOrder());
    }

    return rt;
}
#endif