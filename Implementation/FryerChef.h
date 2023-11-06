#ifndef FRYERCHEF
#define FRYERCHEF

#include "Chef.h"

/**
 * @class FryerChef
 * @brief Represents a Chef specialized in frying food items.
 */
class FryerChef : public Chef {
public:
    /**
     * @brief Cooks an order, handling frying tasks.
     * @param order The order to be processed.
     * @return The processed order.
     */
    Order* cook(Order*);

    /**
     * @brief Constructs a FryerChef with a given next Chef and chef type.
     * @param nextChef The next Chef in the chain.
     * @param type The type of Chef (grill, fryer, or head).
     */
    FryerChef(Chef*, string);

    /**
     * @brief Destroys the FryerChef instance.
     */
    ~FryerChef();
};

#endif
