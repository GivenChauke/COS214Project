#include "ResturantFacade.h"
void ResturantFacade::DisplayMenu(){
    std::cout<<Menu::getMenu()->printMenu()<<std::endl;
}
ResturantFacade::ResturantFacade(){
    this->createWaiters(3);
    this->kitchen = new Kitchen();
    for(int i = 0; i < waiters.size();i++)
    this->kitchen->attachWaiter(waiters.at(i));
    this->cooked = false;
}
ResturantFacade::~ResturantFacade(){
    waiters.clear();
    delete kitchen;
}
void ResturantFacade::createWaiters(int num){
    for(int i = 0;i < num;i++)
    waiters.push_back(new Waiter(num));
}
void ResturantFacade::placeOrder(){
    this->DisplayMenu();
    //callPlaceOrder from customer or customer group siya knows this part
    // but I will just shapa hardcoded dummy orders to simulate the kitchen cooking and 
    //modifying these orders
    std::cout<<"Customer chooses from the above MENU"<<std::endl;
    std::cout<<"Customer Orders before being send to the waiter and/or kitchen: "<<endl;
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
    menu2.push_back(new FoodItem("Margherita", 13, "grill", "Pizza"));
    menu2.push_back(new FoodItem("Pepperoni", 14, "grill", "Pizza"));
    menu2.push_back(new FoodItem("MeatSupreme", 12, "grill", "Pizza"));
    // Create orders
    Order* order1 = new Order();
    order1->setItems(menu);

    Order* order2 = new Order();
    order2->setItems(menu1);

    Order* order3 = new Order();
    order3->setItems(menu2);

    std::cout<<order1->toString()<<std::endl;
    std::cout<<order2->toString()<<std::endl;
    std::cout<<order3->toString()<<std::endl;

    placeOrder(order1);
    placeOrder(order2);
    placeOrder(order3);

}
void ResturantFacade::placeOrder(Order* order)
{
    //give the orders to random waiters and attach these orders to the kitchen
    waiters.at(rand()%3)->TakeOrder(order);
    kitchen->AddOrder(order);
}
void ResturantFacade::getOrders()
{
    if(!cooked)
    {
        std::cout<<"Error no cooked orders to display as yet, order some food to see some cooked orders"<<std::endl;
    }
    else{
        for (size_t i = 0; i < waiters.size(); i++)
        {
            vector<Order*> orders = waiters.at(i)->getOrders();
            if(!orders.empty())
            {
                for(Order* order: orders)
                std::cout<<order->toString()<<std::endl;
            }
        }
    }
}
void ResturantFacade::cook()
{
    kitchen->cook();
    kitchen->notify();
    std::cout<<"Done cooking orders and notifying waiters you can proceed to get the orders"<<std::endl;
    this->cooked = true;
}