#ifndef BURGERTOPPING_H
#define BURGERTOPPING_H

#include "Burger.h"

/**
 * @brief The BurgerTopping class represents a topping for a burger, which is a specific type of Burger.
 */
class BurgerTopping : public Burger {
private:
    Burger* topping; ///< The burger to be decorated.

public:
    /**
     * @brief Constructor for BurgerTopping to set cost to 0.0.
     */
    BurgerTopping();

    /**
     * @brief Virtual method to get the total cost of the burger.
     * @return The total cost of the burger.
     */
    virtual double total();

    /**
     * @brief Virtual method to decorate the burger.
     * @param burgerTopping A pointer to the Burger to be decorated.
     */
    virtual void decorate(Burger* burgerTopping);

protected:
    /**
     * @brief Destructor for BurgerTopping.
     */
    ~BurgerTopping();
};

#endif
