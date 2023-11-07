#ifndef BILLCARETAKER_CPP
#define BILLCARETAKER_CPP

#include "BillCaretaker.h"

/**
 * @file BillCaretaker.cpp
 * @brief Implementation of the BillCaretaker class.
 */

/**
 * @brief Constructor for the BillCaretaker class.
 */
BillCaretaker::BillCaretaker()
{
}

/**
 * @brief Store a Memento object in the caretaker.
 * @param mem A pointer to the BillMemento object to be stored.
 */
void BillCaretaker::storeMemento(BillMemento* mem)
{
    bills.push_back(mem);
}

/**
 * @brief Retrieve a Memento object by customer ID.
 * @param customerID The customer ID for which to retrieve the Memento.
 * @return A pointer to the BillMemento object matching the customer ID, or NULL if not found.
 */
BillMemento* BillCaretaker::retrieveMemento(std::string customerID)
{
    BillMemento* rt = nullptr;

    for (int i = 0; i < bills.size(); i++)
    {
        if (bills[i]->getState()->getCustomerID() == customerID)
        {
            rt = bills[i];
            return rt;
        }
    }

    return rt;
}

#endif
