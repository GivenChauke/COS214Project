#include "Kitchen.h"
#include <gtest/gtest.h>
namespace{
TEST(KitchenTest, GetWaiters) {
    Kitchen* kitchen = new Kitchen();
    Waiter* waiter1 = new Waiter(1);
    Waiter* waiter2 = new Waiter(2);
    Waiter* waiter3 = new Waiter(3);
    kitchen->attachWaiter(waiter1);
    kitchen->attachWaiter(waiter2);
    kitchen->attachWaiter(waiter3);
    cout<<kitchen->getWaiters().size()<<endl;
    EXPECT_EQ(3, kitchen->getWaiters().size()); 
    delete kitchen;
    delete waiter1;
    delete waiter2;
    delete waiter3;
}

TEST(KitchenTest, CookEmptyOrders) {
    Kitchen kitchen;
    // Try to cook empty orders
    kitchen.cook();
    // No orders prepared, so nothing should change
    EXPECT_EQ(0, kitchen.getOrders().size());
}

    TEST(KitchenTest, AddOrder) {
        Kitchen* kitchen = new Kitchen();
        Order* order = new Order();
        kitchen->AddOrder(order);
        EXPECT_EQ(1, kitchen->getOrders().size());

        //cout<<"Before segFault3,0"<<endl;
        delete kitchen;
        //cout<<"Before segFault"<<endl;
        delete order;
    }

    TEST(KitchenTest, AttachWaiter) {
        Kitchen kitchen;
        Waiter* waiter1 = new Waiter(1);
        Waiter* waiter2 = new Waiter(2);
        kitchen.attachWaiter(waiter1);
        kitchen.attachWaiter(waiter2);
        EXPECT_EQ(2, kitchen.getWaiters().size());
    }

    TEST(KitchenTest, DetachWaiter) {
        Kitchen kitchen;
        Waiter* waiter1 = new Waiter(1);
        Waiter* waiter2 = new Waiter(2);
        kitchen.attachWaiter(waiter1);
        kitchen.attachWaiter(waiter2);
        kitchen.detachWaiter(waiter1);
        EXPECT_EQ(1, kitchen.getWaiters().size());
        delete waiter1;
        delete waiter2;
    }
TEST(KitchenTest, cookingOrders)
{
    // Create a kitchen
    Kitchen* kitchen = new Kitchen();

    // Create food items
    vector<FoodItem*> menu;
    menu.push_back(new FoodItem("Beef", 10, "grill", "Burger"));
    menu.push_back(new FoodItem("Chicken", 9, "grill", "Burger"));
    menu.push_back(new FoodItem("Vegetarian", 8, "fryer", "Burger"));

    vector<FoodItem*> menu1;
    menu1.push_back(new FoodItem("Bolognaise", 12, "fryer", "Macaroni"));
    menu1.push_back(new FoodItem("Alfredo", 11, "fryer", "Macaroni"));
    menu1.push_back(new FoodItem("Carbonara", 10, "fryer", "Spaghetti"));

    vector<FoodItem*> menu2;
    menu2.push_back(new FoodItem("Bolognaise", 12, "fryer", "Macaroni"));
    menu2.push_back(new FoodItem("Alfredo", 11, "fryer", "Macaroni"));
    menu2.push_back(new FoodItem("Carbonara", 10, "fryer", "Spaghetti"));
    // Create orders
    Order* order1 = new Order();
    order1->setItems(menu);

    Order* order2 = new Order();
    order2->setItems(menu1);

    Order* order3 = new Order();
    order3->setItems(menu2);

    // Create waiters
    Waiter* waiter1 = new Waiter(1);
    Waiter* waiter2 = new Waiter(2);
    Waiter* waiter3 = new Waiter(3);

    waiter1->TakeOrder(order1);
    waiter2->TakeOrder(order2);
    waiter3->TakeOrder(order3);

    // Attach waiters to the kitchen
    kitchen->attachWaiter(waiter1);
    kitchen->attachWaiter(waiter2);
    kitchen->attachWaiter(waiter3);

    // Submit orders to the kitchen
    kitchen->AddOrder(order1);
    kitchen->AddOrder(order2);
    kitchen->AddOrder(order3);

    // Cook orders in the kitchen
    kitchen->cook();

    // Notify waiters and return orders
    kitchen->notify();

    // Display orders
    cout << "Orders after cooking and notifying waiters:" << endl;
    cout << "Order 1: " << order1->toString() << endl;
    cout << "Order 2: " << order2->toString() << endl;
    cout << "Order 3: " << order3->toString() << endl;

    // Clean up
    cout<<"Detaching waiters from kitchen"<<endl;
    kitchen->detachWaiter(waiter1);
    kitchen->detachWaiter(waiter2);
    kitchen->detachWaiter(waiter3);
    cout<<"deleting kitchen"<<endl;
    delete kitchen;
    cout<<"deleting waiters"<<endl;
    if(!waiter1)
    delete waiter1;
    if(!waiter2)
    delete waiter2;
    if(!waiter3)
    delete waiter3;
    cout<<"deleting orders"<<endl;
    delete order1;
    delete order2;
    delete order3;
    cout<<"deleting fooditems"<<endl;
    for (FoodItem* item : menu) {
        delete item;
    }
        for (FoodItem* item : menu1) {
        delete item;
    }
        for (FoodItem* item : menu2) {
        delete item;
    }
}

}