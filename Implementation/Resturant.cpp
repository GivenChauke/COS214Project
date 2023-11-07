#include "Resturant.h"

void Resturant::displayMenu(){
    std::cout<<Menu::getMenu()->printMenu()<<std::endl;
}
Resturant::Resturant(){
    this->kitchen = new Kitchen();
}
Resturant::~Resturant(){

}
void Resturant::createCustomerGroup(){

}
void Resturant::collectOrderFromCustomerGroup(){

}
void Resturant::giveOrdersToWaiters()
{

}
void Resturant::cookOrders()
{

}
void Resturant::reviewFood()
{

}
void Resturant::payBill()
{

}
void Resturant::displayFloor()
{

}
void Resturant::displayMenu()
{

}