#ifndef KITCHEN
#define KITCHEN

#include "Chef.h"
#include "HeadChef.h"
#include "FryerChef.h"
#include "GrillChef.h"
#include "Waiter.h"
#include <queue>
#include <vector>
using namespace std;

/**
 * @class Kitchen
 * @brief Represents a kitchen where orders are prepared and observed by waiters.
 */
class Kitchen {
public:
    /**
     * @brief Add an order to the queue of orders.
     * @param order The order to add.
     */
    void AddOrder(Order* order);

    /**
     * @brief Cook the orders.
     */
    void cook();

    /**
     * @brief Constructor for the Kitchen class.
     */
    Kitchen();

    /**
     * @brief Destructor for the Kitchen class.
     */
    ~Kitchen();

    /**
     * @brief Attach a waiter to the list of observers.
     * @param waiter The waiter to attach.
     */
    void attachWaiter(Waiter* waiter);

    /**
     * @brief Detach a waiter from the list of observers.
     * @param waiter The waiter to detach.
     */
    void detachWaiter(Waiter* waiter);

    /**
     * @brief Notify the waiters that the orders are ready.
     */
    void notify();

    /**
     * @brief get waiters for testing purposes
    */
    vector<Waiter*> getWaiters();

    /**
    * @brief get orders for testing purposes
    */
    queue<Order*> getOrders();

private:
    Chef* chef;                         /**< The chain of responsibility for order preparation. */
    queue<Order*> orders;               /**< Orders received from waiters. */
    queue<Order*> preparedOrders;      /**< Orders prepared by the chefs. */
    vector<Waiter*> waiters;           /**< Observing waiters. */
};

#endif
