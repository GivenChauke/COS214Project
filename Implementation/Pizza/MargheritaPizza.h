#ifndef MARGHERITAPIZZA_H
#define MARGHERITAPIZZA_H

#include "PizzaType.h"

/**
 * @brief The MargheritaPizza class represents a Margherita pizza type, which is a specific type of Pizza.
 */
class MargheritaPizza : public PizzaType {
public:
    /**
     * @brief Constructor for MargheritaPizza to set its name and cost.
     */
    MargheritaPizza();

    /**
     * @brief Destructor for MargheritaPizza.
     */
    ~MargheritaPizza();
};

#endif
