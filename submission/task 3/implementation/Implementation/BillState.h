#ifndef BILLSTATE_H
#define BILLSTATE_H

#include <vector>
#include <string>
#include "Order.h"

/**
 * @file BillState.h
 * @brief Declaration of the BillState class.
 */

/**
 * @class BillState
 * @brief Represents the state of a bill associated with an order.
 */
class BillState {
private:
    Order* CopyOrder;
    float cost;
    bool paid;
    string customerID;
    int tableID;

public:
    /**
     * @brief Load the state from a file.
     * @param filename The name of the file from which to load the state.
     */
    void loadFromFile(string filename);

    /**
     * @brief Save the state to a file.
     * @param filename The name of the file to which to save the state.
     */
    void saveToFile(string filename);

    /**
     * @brief Get a copy of the order associated with the bill state.
     * @return A pointer to the copy of the order.
     */
    Order* getCopyOrder();

    /**
     * @brief Get the cost of the bill state.
     * @return The cost of the bill state.
     */
    float getCost();

    /**
     * @brief Get the payment status of the bill state.
     * @return true if the bill is paid, false otherwise.
     */
    bool getPaidStatus();

    /**
     * @brief Get the customer ID associated with the bill state.
     * @return The customer ID as a string.
     */
    std::string getCustomerID();

    /**
     * @brief Get the table ID associated with the bill state.
     * @return The table ID.
     */
    int getTableID();

    /**
     * @brief Set a copy of the order associated with the bill state.
     * @param order A pointer to the order to be copied and associated with the bill state.
     */
    void setCopyOrder(Order* order);

    /**
     * @brief Set the cost of the bill state.
     * @param newCost The cost of the bill state to be set.
     */
    void setCost(float newCost);

    /**
     * @brief Set the payment status of the bill state.
     * @param pay true if the bill is paid, false otherwise.
     */
    void setPaid(bool pay);

    /**
     * @brief Set the customer ID associated with the bill state.
     * @param custID The customer ID to be set.
     */
    void setCustomerID(string custID);

    /**
     * @brief Set the table ID associated with the bill state.
     * @param tabID The table ID to be set.
     */
    void setTableID(int tabID);
};

#endif
