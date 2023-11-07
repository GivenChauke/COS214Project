#ifndef BILLMEMENTO_CPP
#define BILLMEMENTO_CPP

#include "BillMemento.h"

/**
 * @file BillMemento.cpp
 * @brief Implementation of the BillMemento class.
 */

/**
 * @brief Get the state associated with the Memento.
 * @return A pointer to the BillState object representing the state.
 */
BillState* BillMemento::getState()
{
    return state;
}

/**
 * @brief Set the state associated with the Memento.
 * @param bs A pointer to the BillState object to be set as the state.
 */
void BillMemento::setState(BillState* bs)
{
    this->state = bs;
}

#endif
