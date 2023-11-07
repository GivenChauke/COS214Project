#include "Resturant.h"

void Resturant::displayMenu(){
    std::cout<<Menu::getMenu()->printMenu()<<std::endl;
}

void Resturant::giveOrdersToCustomers()
{
    
}
Resturant::Resturant(){
    this->kitchen = new Kitchen();
    this->floor = nullptr;
}
Resturant::~Resturant(){
    delete kitchen;
    delete floor;
}
void Resturant::createResturant()
{
    int numTables = 0; int waiters = 0;
    std::cout<<"How many tables do you want in the Resturant: "<<std::endl;
    std::cin>>numTables;
    std::cout<<"How many waiters do you want in the Resturant: "<<std::endl;
    std::cin>>waiters;

    floor = new Floor(numTables);
    for (int i = 0; i < waiters; i++){
        kitchen->attachWaiter(dynamic_cast<Waiter*>(floor->createWaiter()));
    }
}
void Resturant::createCustomerGroup(){
    int customerGroups = 0; int waiters = 0; bool input = true;
    while(input){
    std::cout<<"How many groups do you want in the Resturant: "<<std::endl;
    std::cin>>customerGroups;
    if(customerGroups<= 0)
    {
        std::cout<<"Error ,number must be greater than or equal to 0"<<endl;
    }
    else input = false;
    }
    for(int i = 0; i < customerGroups;i++)
    {
        CustomerGroup* customergroup = new CustomerGroup();
        std::cout<<"How many customers do you want in the group "<<i<<std::endl;
        std::cin>>waiters;
        while(waiters <= 0)
        {
            std::cout<<"Error ,number must be greater than or equal to 0"<<endl;
            std::cout<<"How many customers do you want in the group "<<i<<std::endl;
            std::cin>>waiters;
        }
        for(int k = 0;k < waiters;k++)
        customergroup->addCustomer(Customer());
        floor->addCustomerGroup(customergroup);
    }
    std::cout<<"How many waiters do you want in the Resturant: "<<std::endl;
    std::cin>>waiters;

}
void Resturant::collectOrderFromCustomerGroup(){

}
void Resturant::giveOrdersToWaiters()
{
    //NOT:IMPLEMENTED IT WAS NOTIFY
}
void Resturant::cookOrders()
{
    kitchen->cook();
    kitchen->notify();
    std::cout<<"Done cooking orders and notifying waiters."<<std::endl;
    this->cooked = true;
}

void Resturant::createResturant()
{
    kitchen->cook();
    kitchen->notify();
    std::cout<<"Done cooking orders and notifying waiters."<<std::endl;
    this->cooked = true;    
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
void Resturant::displayMenu()
{
    std::cout<<Menu::getMenu()->printMenu()<<std::endl;
}