#ifndef BURGER_H
#define BURGER_H

#include "../Food.h"
#include <string>
#include <iostream>

/**
 * @brief The Burger class represents a generic burger.
 */
class Burger : public Food {
private:
    double cost; ///< Cost of the burger.

public:
    /**
     * @brief Constructor for Burger to set its cost to 0.0.
     */
    Burger();

    /**
     * @brief Virtual method to decorate the burger.
     * @param burger A pointer to the Burger to be decorated.
     */
    virtual void decorate(Burger*) = 0;

    /**
     * @brief Virtual method to get the total cost of the burger.
     * @return The total cost of the burger.
     */
    virtual double total() = 0;

    /**
     * @brief Get the cost of the burger.
     * @return The cost of the burger.
     */
    double getCost();

    /**
     * @brief Set the cost of the burger.
     * @param cost The cost of the burger.
     */
    void setCost(double cost);

    /**
     * @brief Virtual destructor for Burger.
     */
    virtual ~Burger();
};

#endif