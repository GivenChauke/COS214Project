#ifndef PIZZATYPE_H
#define PIZZATYPE_H

#include "Pizza.h"

/**
 * @brief The PizzaType class represents a specific type of pizza, which is a type of Pizza.
 */
class PizzaType : public Pizza {
private:
    Pizza* type; ///< The type of pizza.

public:
    /**
     * @brief Constructor for PizzaType.
     */
    PizzaType();

    /**
     * @brief Returns the total cost of the pizza.
     * @return The total cost of the pizza.
     */
    virtual double total();

    /**
     * @brief Decorates the pizza.
     * @param pizzaType A pointer to the Pizza to be decorated.
     */
    virtual void decorate(Pizza* pizzaType);

protected:
    /**
     * @brief Destructor for PizzaType.
     */
    ~PizzaType();
};

#endif