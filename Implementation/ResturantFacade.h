#ifndef FACADE
#define FACADE
#include "Kitchen.h"

class ResturantFacade{
    public:
    ResturantFacade();
    ~ResturantFacade();
    /**
     * @brief Cook the orders display chain,observer,Factory and decorator DP's.
     */
    void cook();
    /**
     * @brief creates waitetrs to be attached to the kitchen after giving them orders
     * called by the facade constructor
     */
    void createWaiters(int);
    /**
     * @brief place order by first from a customer to the waiter to kitchen .
     */
    void placeOrder();
    /**
     * @brief displays the SingleTon menu class.
     */
    void DisplayMenu();
    /**
     * @brief display cooked orders.
     */
    void getOrders();
    
    private:
    /**
     * @brief place order by first from a customer to the waiter to kitchen helper.
     */
    void placeOrder(Order*);
    vector<Waiter*>waiters;
    Kitchen* kitchen;
    bool cooked;
};
#endif