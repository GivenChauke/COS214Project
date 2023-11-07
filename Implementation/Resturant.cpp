#include "Resturant.h"

void Resturant::displayMenu(){
    std::cout<<Menu::getMenu()->printMenu()<<std::endl;
}

void Resturant::giveOrdersToCustomers()
{
    
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
void Resturant::cookOrders(){

}

void Resturant::createResturant()
{
    
}
void Resturant::reviewFood()
{

}
void Resturant::payBill()
{

}
void Resturant::displayFloor(){
    floor->printTablesAndWaiters();

}
