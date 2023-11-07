#ifndef CHILLITOPPING_H
#define CHILLITOPPING_H

#include "BurgerTopping.h"

/**
 * @brief The ChilliTopping class represents a chili topping for a burger, which is a specific type of BurgerTopping.
 */
class ChilliTopping : public BurgerTopping {
public:
    /**
     * @brief Constructor for ChilliTopping to set its name and cost.
     */
    ChilliTopping();

    /**
     * @brief Destructor for ChilliTopping.
     */
    ~ChilliTopping();
};

#endif