#ifndef CUSTOMER_STATE
#define CUSTOMER_STATE

#include <iostream>
#include <string>

/**
 * @file CustomerState.h
 * @brief Declaration of the CustomerState class.
 */

/**
 * @class CustomerState
 * @brief Represents the state of a customer in a restaurant.
 */
class CustomerState
{
public:
    /**
     * @brief Get the status of the customer state.
     * @return The status as a string.
     */
    virtual string getStatus() = 0;

    /**
     * @brief Perform an action associated with the customer state.
     */
    virtual void action() = 0;
};

#endif
