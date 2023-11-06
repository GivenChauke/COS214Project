#ifndef BILLCARETAKER_H
#define BILLCARETAKER_H

#include <string>
#include <vector>
#include <map>
#include "BillMemento.h"

/**
 * @file BillCaretaker.h
 * @brief Declaration of the BillCaretaker class.
 */

/**
 * @class BillCaretaker
 * @brief Manages the storage and retrieval of bill Memento objects.
 */
class BillCaretaker {
private:
    vector<BillMemento*> bills;

public:
    /**
     * @brief Constructor for the BillCaretaker class.
     */
    BillCaretaker();

    /**
     * @brief Store a Memento object in the caretaker.
     * @param mem A pointer to the BillMemento object to be stored.
     */
    void storeMemento(BillMemento* mem);

    /**
     * @brief Retrieve a Memento object by customer ID.
     * @param customerID The customer ID for which to retrieve the Memento.
     * @return A pointer to the BillMemento object matching the customer ID, or nullptr if not found.
     */
    BillMemento* retrieveMemento(string customerID);
};

#endif
