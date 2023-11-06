#ifndef ONIONTOPPING_H
#define ONIONTOPPING_H

#include "BurgerTopping.h"

/**
 * @brief The OnionTopping class represents an onion topping for a burger, which is a specific type of BurgerTopping.
 */
class OnionTopping : public BurgerTopping {
public:
    /**
     * @brief Constructor for OnionTopping to set its name and cost.
     */
    OnionTopping();

    /**
     * @brief Destructor for OnionTopping.
     */
    ~OnionTopping();
};

#endif