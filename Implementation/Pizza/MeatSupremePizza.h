#ifndef MEATSUPREMEPIZZA_H
#define MEATSUPREMEPIZZA_H

#include "PizzaType.h"

/**
 * @brief The MeatSupremePizza class represents a Meat Supreme pizza type, which is a specific type of Pizza.
 */
class MeatSupremePizza : public PizzaType {
public:
    /**
     * @brief Constructor for MeatSupremePizza to set its name and cost.
     */
    MeatSupremePizza();

    /**
     * @brief Destructor for MeatSupremePizza.
     */
    ~MeatSupremePizza();
};

#endif