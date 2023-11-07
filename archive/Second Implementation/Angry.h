#ifndef ANGRY_H
#define ANGRY_H

#include "CustomerState.h"
#include <iostream>
using namespace std;

/**
 * @file Angry.h
 * @brief Declaration of the Angry class, a subclass of CustomerState.
 */

/**
 * @class Angry
 * @brief Represents the "Angry" state of a customer.
 */
class Angry : public CustomerState
{
public:
    /**
     * @brief Get the status of the customer state.
     * @return A string representing the status, which is "ANGRY" for Angry state.
     */
    string getStatus() { return "ANGRY"; }

    /**
     * @brief Perform an action associated with the Angry state.
     * In this case, it prints a message indicating dissatisfaction with the food.
     */
    void action() { cout << "Customer: THE FOOD HERE SUCKS"; }
};

#endif
