#ifndef CHEESETOPPING_H
#define CHEESETOPPING_H

#include "BurgerTopping.h"

/**
 * @brief The CheeseTopping class represents a cheese topping for a burger, which is a specific type of BurgerTopping.
 */
class CheeseTopping : public BurgerTopping {
public:
    /**
     * @brief Constructor for CheeseTopping to set its name and cost.
     */
    CheeseTopping();

    /**
     * @brief Destructor for CheeseTopping.
     */
    ~CheeseTopping();
};

#endif
