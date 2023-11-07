#ifndef CUSTOMER_GROUP_CPP
#define CUSTOMER_GROUP_CPP
#include <ctime>
#include "CustomerGroup.h"
#include <iostream>
#include <vector>
using namespace std;

#include "Bill.h"
#include "Review.h"

/**
 * @file CustomerGroup.cpp
 * @brief Implementation of the CustomerGroup class.
 */

/**
 * @brief Add a customer to the customer group.
 * @param customer The Customer object to be added.
 * @return true if the addition was successful, false otherwise.
 */
bool CustomerGroup::addCustomer(Customer customer)
{
    vector<Customer>::iterator iter = this->customers.begin();
    this->customers.insert(iter, customer);
    return true;
}

/**
 * @brief Default constructor for the CustomerGroup class.
 */
CustomerGroup::CustomerGroup()
{
    RandomState = rand()%5;
    // Constructor implementation can be added here if needed.
}

int CustomerGroup::getRandomState(){
    return RandomState;
}

/**
 * @brief Print the IDs of the customers in the customer group.
 */
void CustomerGroup::print()
{
    for (int i = 0; i < customers.size(); i++)
    {
        cout << customers[i].getID() << endl;
    }
}

/**
 * @brief Get the customer at a specific index in the group.
 * @param index The index of the customer to retrieve.
 * @return The Customer object at the specified index.
 */
Customer CustomerGroup::CustomerAt(int index)
{
    return customers.at(index);
}

/**
 * @brief Get the number of customers in the group.
 * @return The number of customers in the group.
 */
int CustomerGroup::NumOfCustomer()
{
    return customers.size();
}

/**
 * @brief Receive orders from a list of orders and update customer states based on food quality.
 * @param orders A vector of Order pointers to be received.
 */
void CustomerGroup::receiveOrder(vector<Order*> orders)
{
    for (int t = 0; t < this->customers.size(); t++)
    {
        for (int i = 0; i < orders.size(); i++)
        {
            if(customers.at(t).getID()== orders.at(i)->getBill()->getCustomerID())
            customers.at(t).receiveOrder(orders.at(i));

        }
    }
    this->orders.clear();
    this->orders.insert(this->orders.begin(), orders.begin(), orders.end());
}

/**
 * @brief Merge the bills of the customer group into a vector of bills.
 * @return A vector of Bill pointers representing merged bills.
 */
vector<Bill*> CustomerGroup::mergeBill()
{
    vector<Bill*> bills;
    srand((unsigned)time(NULL));
    int random = (rand() % orders.size()) + 1;

    int billIndex = 0;
    int difference = orders.size() - random;
    for (int i = 0; i < random; i++)
    {
        if (i == 0)
        {
            bills.push_back(orders.at(billIndex++)->getBill());
            for (int b = 0; b < difference; b++)
            {
                bills.push_back(orders.at(billIndex++)->getBill());
            }
        }
        else
        {
            bills.push_back(orders.at(billIndex++)->getBill());
        }
    }

    return bills;
}

/**
 * @brief Pay the bills of the customer group.
 * @return true if the bills were paid successfully, false otherwise.
 */
bool CustomerGroup::PayBill()
{
    vector<Bill*> bills = mergeBill();

    for (int i = 0; i < bills.size(); i++)
    {
        bills.at(i)->setBillStatus(true);
    }
    return true;
}

/**
 * @brief Generate food reviews for the customer group.
 * @return A vector of Review objects representing food reviews.
 */
vector<Review> CustomerGroup::ReviewFood()
{
    vector<Review> Reviews;

    for (int i = 0; i < NumOfCustomer(); i++)
    {
        Review note;
        note.setReviewComment(customers.at(i).GiveComment_Food());
        note.setRating(customers.at(i).GiveRating_Food());
        Reviews.push_back(note);
    }

    return Reviews;
}

/**
 * @brief Generate service reviews for the customer group.
 * @return A vector of Review objects representing service reviews.
 */
vector<Review> CustomerGroup::ReviewService()
{
    vector<Review> Reviews;

    for (int i = 0; i < orders.size(); i++)
    {
        Review note;
        note.setReviewComment(customers.at(i).GiveComment_Food());
        note.setRating(customers.at(i).GiveRating_Service());
        Reviews.push_back(note);
        Reviews.push_back(note);
    }

    return Reviews;
}

/**
 * @brief Place orders for each customer in the group.
 * @return A vector of Order pointers representing the placed orders.
 */
vector<Order*> CustomerGroup::PlaceOrder()
{
    vector<Order*> rt;
    for (int i = 0; i < customers.size(); i++)
    {
        rt.push_back(customers.at(i).PlaceOrder());
    }

    return rt;
}

#endif
