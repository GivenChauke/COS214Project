#ifndef FACADE
#define FACADE
#include "Kitchen.h"
#include "Floor.h"

class Resturant{
    public:
    Resturant();

    ~Resturant();

    void cookOrders();

    void createResturant();

    void giveOrdersToWaiters();

    void displayMenu();

    void giveOrdersToCustomers();

    void createCustomerGroup();
    
    void reviewFood();

    void payBill();

    void displayFloor();

    void collectOrderFromCustomerGroup();
    
    private:

    Floor* floor;
    Kitchen* kitchen;
    bool cooked;
};
#endif