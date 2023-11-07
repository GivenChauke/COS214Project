#ifndef PIZZA_H
#define PIZZA_H

#include "../Food.h"
#include <string>
#include <iostream>

/**
 * @brief The Pizza class represents a generic pizza.
 */
class Pizza : public Food {
private:
    double cost; ///< Cost of the pizza.

public:
    /**
     * @brief Constructor for Pizza to set its cost to 0.0.
     */
    Pizza();

    /**
     * @brief Virtual method to decorate the pizza.
     * @param pizza A pointer to the Pizza to be decorated.
     */
    virtual void decorate(Pizza*) = 0;

    /**
     * @brief Virtual method to get the total cost of the pizza.
     * @return The total cost of the pizza.
     */
    virtual double total() = 0;

    /**
     * @brief Get the cost of the pizza.
     * @return The cost of the pizza.
     */
    double getCost();

    /**
     * @brief Set the cost of the pizza.
     * @param cost The cost of the pizza.
     */
    void setCost(double cost);

    /**
     * @brief Virtual destructor for Pizza.
     */
    virtual ~Pizza();
};

#endif

