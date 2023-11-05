#ifndef CHEF
#define CHEF

#include <string>
using namespace std;

#include "Order.h"
#include "AbstractDishBuilder.h"
#include "DishBuilder.h"

/**
 * @class Chef
 * @brief Represents a Chef in a kitchen who handles orders.
 */
class Chef {
public:
    /**
     * @brief Adds a Chef to the chain.
     * @param chef The Chef to be added to the chain.
     */
    void addChef(Chef*);

    /**
     * @brief Cooks an order or passes it to the next Chef in the chain.
     * @param order The order to be processed.
     * @return The processed order.
     */
    virtual Order* cook(Order*);

    /**
     * @brief Constructs a Chef with a given next Chef and chef type.
     * @param nextChef The next Chef in the chain.
     * @param type The type of Chef (grill, fryer, or head).
     */
    Chef(Chef*, string);

    /**
     * @brief Destroys the Chef instance.
     */
    virtual ~Chef();

    /**
     * @brief Checks if the order contains food items to be fried/grilled or concerns the head chef.
     * @param order The order to be checked.
     * @return True if the order requires this Chef's attention, false otherwise.
     */
    bool processOrder(Order*);

protected:
    Chef* nextChef;               /**< The next Chef in the chain. */
    AbstractDishBuilder* builder; /**< The builder to be used to cook the food. */
    string type;                  /**< The type of Chef. */
};

#endif
