#ifndef BURGERBASE_H
#define BURGERBASE_H

#include "Burger.h"

/**
 * @brief The BurgerBase class represents the base of a burger, which is a specific type of Burger.
 */
class BurgerBase : public Burger {
public:
    /**
     * @brief Constructor for BurgerBase.
     */
    BurgerBase();

    /**
     * @brief Virtual method to get the total cost of the burger.
     * @return The total cost of the burger.
     */
    virtual double total();

    /**
     * @brief Virtual method to decorate the burger.
     * @param burger A pointer to the Burger to be decorated.
     */
    virtual void decorate(Burger*);

    /**
     * @brief Destructor for BurgerBase.
     */
    ~BurgerBase();
};

#endif

