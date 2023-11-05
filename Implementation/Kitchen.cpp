// #include "Kitchen.h"
// void Kitchen::AddOrder(Order* order)
// {
//     orders.push(order);
// }
// Kitchen::Kitchen()
// {
//     Chef* headchef = new HeadChef(nullptr,"head");
//     Chef* grillChef = new GrillChef(headchef,"grill");
//     chef = new FryerChef(grillChef,"fry");

// }
// Kitchen::~Kitchen()
// {

//     for (auto it = waiters.begin(); it != waiters.end(); ++it)
//     {
//         waiters.erase(it);//detach all waiters
//     }

// }
// void Kitchen::attachWaiter(Waiter* waiter)
// {
//     waiters.push_back(waiter);
// }
// void Kitchen::detachWaiter(Waiter* waiter)
// {
//     for (auto it = waiters.begin(); it != waiters.end(); ++it)
//     {
//         if (*it == waiter)
//         {
//             waiters.erase(it);
//             break; // Exit the loop after erasing the waiter
//         }
//     }
// }
// void Kitchen ::cook()
// {
//     while(!orders.empty())
//     {
//         preparedOrders.push(chef->cook(orders.front()));
//         orders.pop();
//     }
// }
// void Kitchen::notify()
// {
//     while(!preparedOrders.empty())
//     {
//         for (auto it = waiters.begin(); it != waiters.end(); ++it)
//     {
//         Waiter* currentWaiter = *it; // Access the Waiter using the iterator
//         if (preparedOrders.front()->getWaiter()->getEmployeeId() == currentWaiter->getEmployeeId() ) {
//             currentWaiter->CollectOrderFromKitchen(preparedOrders.front());
//         }
//     }
//         preparedOrders.pop();
//     }
// }
// vector<Waiter*> Kitchen::getWaiters()
// {
//     return waiters;
// }
// queue<Order*> Kitchen::getOrders()
// {
//     return orders;
// }
