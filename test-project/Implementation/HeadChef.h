#ifndef HEADCHEF
#define HEADCHEF

#include "Chef.h"

/**
 * @class HeadChef
 * @brief Represents the Head Chef in the kitchen, the end of the chain.
 */
class HeadChef : public Chef {
public:
    /**
     * @brief Cooks an order, handling tasks appropriate for the Head Chef.
     * @param order The order to be processed.
     * @return The processed order.
     */
    Order* cook(Order*);

    /**
     * @brief Constructs the HeadChef, the end of the Chef chain.
     * @param nextChef The next Chef in the chain (should be null).
     * @param type The type of Chef (grill, fryer, or head).
     */
    HeadChef(Chef*, string);

    /**
     * @brief Destroys the HeadChef instance.
     */
    ~HeadChef();
};

#endif