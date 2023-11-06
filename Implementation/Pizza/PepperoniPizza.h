#ifndef PEPPERONIPIZZA_H
#define PEPPERONIPIZZA_H

#include "PizzaType.h"

/**
 * @brief The PepperoniPizza class represents a Pepperoni pizza type, which is a specific type of Pizza.
 */
class PepperoniPizza : public PizzaType {
public:
    /**
     * @brief Constructor for PepperoniPizza to set its name and cost.
     */
    PepperoniPizza();

    /**
     * @brief Destructor for PepperoniPizza.
     */
    ~PepperoniPizza();
};

#endif
