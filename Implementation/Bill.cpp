#ifndef BILL_CPP
#define BILL_CPP

#include "Bill.h"
#include "BillMemento.h"

/**
 * @file Bill.cpp
 * @brief Implementation of the Bill class.
 */

/**
 * @brief Constructor for the Bill class.
 */
Bill::Bill()
{
    cost = 0.0;
    paid = false;
    CopyOrders = NULL;
}

/**
 * @brief Get a copy of the order associated with the bill.
 * @return A pointer to the copy of the order.
 */
Order* Bill::getCopyOrder()
{
    return CopyOrders;
}

/**
 * @brief Set a copy of the order associated with the bill.
 * @param order A pointer to the order to be copied and associated with the bill.
 */
void Bill::setCopyOrder(Order* order)
{
    this->CopyOrders = new Order(*order);
}

/**
 * @brief Get the cost of the bill.
 * @return The cost of the bill.
 */
float Bill::getCost()
{
    return cost;
}

/**
 * @brief Set the cost of the bill.
 * @param orderCost The cost of the bill to be set.
 */
void Bill::setCost(float orderCost)
{
    cost = orderCost;
}

/**
 * @brief Get the status of the bill.
 * @return true if the bill is paid, false otherwise.
 */
bool Bill::getBillStatus()
{
    return paid;
}

/**
 * @brief Set the status of the bill.
 * @param BillStatus true if the bill is paid, false otherwise.
 */
void Bill::setBillStatus(bool BillStatus)
{
    paid = BillStatus;
}

/**
 * @brief Get the customer ID associated with the bill.
 * @return The customer ID as a string.
 */
std::string Bill::getCustomerID()
{
    return customerID;
}

/**
 * @brief Get the table ID associated with the bill.
 * @return The table ID.
 */
int Bill::getTableID()
{
    return tableID;
}

/**
 * @brief Recover the state of the bill from a Memento object.
 * @param mem A pointer to the Memento object containing the saved state.
 */
void Bill::recoverBill(BillMemento* mem)
{
    cost = mem->getState()->getCost();
    paid = mem->getState()->getPaidStatus();
    tableID = mem->getState()->getTableID();
    
    if ((mem->getState()->getCopyOrder()) != NULL)
        CopyOrders = new Order(*(mem->getState()->getCopyOrder()));
    else
        CopyOrders = NULL;
}

/**
 * @brief Print information about the bill, including cost, payment status, table ID, and customer ID.
 */
void Bill::print()
{
    cout << "COST " << cost << endl;
    cout << "IS IT PAID " << paid << endl;
    cout << "TableID " << tableID << endl;
    cout << "CUSTOMER ID " << customerID << endl;
}

/**
 * @brief Set the customer ID associated with the bill.
 * @param ID The customer ID to be set.
 */
void Bill::setCustomerID(string ID)
{
    this->customerID = ID;
}

/**
 * @brief Save the current state of the bill to a Memento object.
 * @return A pointer to the Memento object containing the saved state.
 */
BillMemento* Bill::saveState()
{
    BillMemento* newState = new BillMemento();
    newState->setState(this->getBillState());
    return newState;
}

/**
 * @brief Get the current state of the bill.
 * @return A pointer to the BillState object representing the current state of the bill.
 */
BillState* Bill::getBillState()
{
    BillState* rt = new BillState();
    rt->setCost(cost);
    rt->setCustomerID(customerID);
    rt->setPaid(paid);
    rt->setTableID(tableID);
    rt->setCopyOrder(CopyOrders);
    return rt;
}

#endif
