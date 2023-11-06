#ifndef GRILLCHEF
#define GRILLCHEF

#include "Chef.h"

/**
 * @class GrillChef
 * @brief Represents a Chef specialized in grilling food items.
 */
class GrillChef : public Chef {
public:
    /**
     * @brief Cooks an order, handling grilling tasks.
     * @param order The order to be processed.
     * @return The processed order.
     */
    Order* cook(Order*);

    /**
     * @brief Constructs a GrillChef with a given next Chef and chef type.
     * @param nextChef The next Chef in the chain.
     * @param type The type of Chef (grill, fryer, or head).
     */
    GrillChef(Chef*, string);

    /**
     * @brief Destroys the GrillChef instance.
     */
    ~GrillChef();
};

#endif
