#ifndef WAITER_H
#define WAITER_H

//#include "Employee.h"
#include "Order.h"
#include <vector>

/**
 * @class Waiter
 * @brief Represents a waiter who takes and delivers orders in a restaurant.
 */
class Waiter {
public:
    /**
     * @brief Constructs a Waiter with the given ID.
     * @param id The ID of the waiter.
     */
    Waiter(int id);
    ~Waiter();
    /**
     * @brief Retrieves reviews from the kitchen department.
     */
    void getReviewsForKitchenDepartment();

    /**
     * @brief Collects an order from the kitchen and updates the order.
     * @param order The order to be updated.
     */
    void CollectOrderFromKitchen(Order*);

    /**
     * @brief Takes an order from a table.
     * @param table The table from which the order is taken.
     */
    void TakeOrder(Order*);//change it back to table

    /**
     * @brief Delivers orders to the respective tables.
     */
    void deliverOrders();
    int getEmployeeId();
    /**
     * @brief get orders.
     */
    vector<Order*> getOrders();

private:
    vector<Order*> customerOrder; /**< Orders from customers or from the kitchen. */
    int employeeId;
};

#endif // WAITER_H

