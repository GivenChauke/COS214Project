#ifndef CUSTOMER_GROUP_H
#define CUSTOMER_GROUP_H

#include <vector>
#include "Customer.h"
#include "Order.h"
#include "Review.h"

/**
 * @file CustomerGroup.h
 * @brief Declaration of the CustomerGroup class.
 */

/**
 * @class CustomerGroup
 * @brief Represents a group of customers in a restaurant.
 */
class CustomerGroup
{
protected:
    vector<Customer> customers;
    int RandomState;
    vector<Order*> orders;

public:
    /**
     * @brief Get the customers in the group.
     * @return A vector of Customer objects in the group.
     */
    vector<Customer> getCustomers();

    /**
     * @brief Set the customers in the group.
     * @param customer A vector of Customer objects to set as the group.
     */
    void setCustomers(vector<Customer> customer);

    /**
     * @brief Get the random state of the group.
     * @return The random state as an integer.
     */
    int getRandomState();
    void decrementRandomState(){RandomState--;}

    /**
     * @brief Set the random state of the group.
     * @param RandomState The random state to be set.
     */
    void setRandomState(int RandomState);

    /**
     * @brief Get the number of customers in the group.
     * @return The number of customers in the group.
     */
    int NumOfCustomer();

    /**
     * @brief Get a specific customer in the group.
     * @param index The index of the customer to retrieve.
     * @return The Customer object at the specified index.
     */
    Customer CustomerAt(int index);

    /**
     * @brief Merge the bills of the customer group into a vector of bills.
     * @return A vector of Bill pointers representing merged bills.
     */
    vector<Bill*> mergeBill();

    /**
     * @brief Add a customer to the customer group.
     * @param customer The Customer object to be added.
     * @return true if the addition was successful, false otherwise.
     */
    bool addCustomer(Customer customer);

    /**
     * @brief Default constructor for the CustomerGroup class.
     */
    CustomerGroup();

    /**
     * @brief Receive orders for the group and update customer states based on food quality.
     * @param orders A vector of Order pointers to be received.
     */
    void receiveOrder(vector<Order*> orders);

    /**
     * @brief Pay the bills of the customer group.
     * @return true if the bills were paid successfully, false otherwise.
     */
    bool PayBill();

    /**
     * @brief Generate food reviews for the customer group.
     * @return A vector of Review objects representing food reviews.
     */
    vector<Review> ReviewFood();

    /**
     * @brief Generate service reviews for the customer group.
     * @return A vector of Review objects representing service reviews.
     */
    vector<Review> ReviewService();

    /**
     * @brief Place orders for each customer in the group.
     * @return A vector of Order pointers representing the placed orders.
     */
    vector<Order*> PlaceOrder();

    /**
     * @brief Print the IDs of the customers in the group.
     */
    void print();
};

#endif
