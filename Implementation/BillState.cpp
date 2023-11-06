#ifndef BILLSTATE_CPP
#define BILLSTATE_CPP

#include <string>
#include "BillState.h"
#include "Order.h"

using namespace std;

/**
 * @file BillState.cpp
 * @brief Implementation of the BillState class.
 */

/**
 * @brief Get a copy of the order associated with the bill state.
 * @return A pointer to the copy of the order.
 */
Order* BillState::getCopyOrder()
{
    return CopyOrder;
}

/**
 * @brief Get the cost of the bill state.
 * @return The cost of the bill state.
 */
float BillState::getCost()
{
    return cost;
}

/**
 * @brief Get the payment status of the bill state.
 * @return true if the bill is paid, false otherwise.
 */
bool BillState::getPaidStatus()
{
    return paid;
}

/**
 * @brief Get the customer ID associated with the bill state.
 * @return The customer ID as a string.
 */
string BillState::getCustomerID()
{
    return customerID;
}

/**
 * @brief Get the table ID associated with the bill state.
 * @return The table ID.
 */
int BillState::getTableID()
{
    return tableID;
}

/**
 * @brief Set a copy of the order associated with the bill state.
 * @param order A pointer to the order to be copied and associated with the bill state.
 */
void BillState::setCopyOrder(Order* order)
{
    CopyOrder = new Order(*order);
}

/**
 * @brief Set the cost of the bill state.
 * @param newCost The cost of the bill state to be set.
 */
void BillState::setCost(float newCost)
{
    cost = newCost;
}

/**
 * @brief Set the payment status of the bill state.
 * @param pay true if the bill is paid, false otherwise.
 */
void BillState::setPaid(bool pay)
{
    paid = pay;
}

/**
 * @brief Set the customer ID associated with the bill state.
 * @param custID The customer ID to be set.
 */
void BillState::setCustomerID(string custID)
{
    customerID = custID;
}

/**
 * @brief Set the table ID associated with the bill state.
 * @param tabID The table ID to be set.
 */
void BillState::setTableID(int tabID)
{
    tableID = tabID;
}

#endif
