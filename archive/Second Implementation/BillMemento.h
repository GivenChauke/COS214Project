#ifndef BILLMEMENTO_H
#define BILLMEMENTO_H

#include <string>
#include "BillState.h"

/**
 * @file BillMemento.h
 * @brief Declaration of the BillMemento class.
 */

/**
 * @class BillMemento
 * @brief Represents a Memento for storing the state of a bill.
 */
class BillMemento 
{
private:
    BillState* state;
    
public:
    /**
     * @brief Constructor for the BillMemento class.
     */
    BillMemento() { state = nullptr; }

    /**
     * @brief Get the state associated with the Memento.
     * @return A pointer to the BillState object representing the state.
     */
    BillState* getState();

    /**
     * @brief Set the state associated with the Memento.
     * @param bs A pointer to the BillState object to be set as the state.
     */
    void setState(BillState* bs);
};

#endif
