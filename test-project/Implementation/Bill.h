#ifndef BILL_H
#define BILL_H

#include "BillState.h"
#include <string>
#include <vector>
#include <map>
using namespace std;
#include "BillMemento.h"
#include "Order.h"

/**
 * @file Bill.h
 * @brief Declaration of the Bill class.
 */

/**
 * @class Bill
 * @brief Represents a bill associated with a customer's order.
 */
class Bill
{
private:
    float cost;
    bool paid;
    int tableID;
    Order* CopyOrders;
    string customerID;

public:
    /**
     * @brief Constructor for the Bill class.
     */
    Bill();

    /**
     * @brief Get a copy of the order associated with the bill.
     * @return A pointer to the copy of the order.
     */
    Order* getCopyOrder();

    /**
     * @brief Set a copy of the order associated with the bill.
     * @param order A pointer to the order to be copied and associated with the bill.
     */
    void setCopyOrder(Order* order);

    /**
     * @brief Get the cost of the bill.
     * @return The cost of the bill.
     */
    float getCost();

    /**
     * @brief Set the cost of the bill.
     * @param orderCost The cost of the bill to be set.
     */
    void setCost(float orderCost);

    /**
     * @brief Get the current state of the bill.
     * @return A pointer to the BillState object representing the current state of the bill.
     */
    BillState* getBillState();

    /**
     * @brief Get the status of the bill.
     * @return true if the bill is paid, false otherwise.
     */
    bool getBillStatus();

    /**
     * @brief Set the status of the bill.
     * @param BillStatus true if the bill is paid, false otherwise.
     */
    void setBillStatus(bool BillStatus);

    /**
     * @brief Set the table ID associated with the bill.
     * @param ID The table ID to be set.
     */
    void setTableID(int ID);

    /**
     * @brief Set the customer ID associated with the bill.
     * @param ID The customer ID to be set.
     */
    void setCustomerID(string ID);

    /**
     * @brief Get the customer ID associated with the bill.
     * @return The customer ID as a string.
     */
    std::string getCustomerID();

    /**
     * @brief Get the table ID associated with the bill.
     * @return The table ID.
     */
    int getTableID();

    /**
     * @brief Recover the state of the bill from a Memento object.
     * @param mem A pointer to the Memento object containing the saved state.
     */
    void recoverBill(BillMemento* mem);

    /**
     * @brief Save the current state of the bill to a Memento object.
     * @return A pointer to the Memento object containing the saved state.
     */
    BillMemento* saveState();

    /**
     * @brief Print information about the bill, including cost, payment status, table ID, and customer ID.
     */
    void print();
};

#endif
