#ifndef PIZZABASE_H
#define PIZZABASE_H

#include "Pizza.h"

/**
 * @brief The PizzaBase class represents the base of a pizza, which is a specific type of Pizza.
 */
class PizzaBase : public Pizza {
public:
    /**
     * @brief Constructor for PizzaBase.
     */
    PizzaBase();

    /**
     * @brief Returns the total cost of the pizza. 
     * @return The total cost of the pizza.
     */
    virtual double total();

    /**
     * @brief Decorates the pizza.
     * @param pizza A pointer to the Pizza to be decorated.
     */
    virtual void decorate(Pizza*);

    /**
     * @brief Destructor for PizzaBase.
     */
    ~PizzaBase();
};

#endif
