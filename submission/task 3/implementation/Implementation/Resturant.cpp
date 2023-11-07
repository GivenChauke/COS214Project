#include "Resturant.h"

void Resturant::displayMenu(){
    std::cout<<Menu::getMenu()->printMenu()<<std::endl;
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
        Waiter* waiter = dynamic_cast<Waiter*>(floor->createWaiter());
        if(waiter) {
            waiter->setKitchen(kitchen);
            kitchen->attachWaiter(waiter);
        }
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

}
void Resturant::collectOrderFromCustomerGroup(){

    floor->waiterIterateTables();
}

void Resturant::giveOrdersToWaiters()
{
    if(cooked)
    {
        

        //shapa iteration
    }
}
void Resturant::cookOrders()
{
    kitchen->cook();
    kitchen->notify();
    std::cout<<"Done cooking orders and notifying waiters."<<std::endl;
    this->cooked = true;
}
void Resturant::reviewFood()
{
    vector<Table*> tables = floor->getTables();
        for(Table* table: tables){
        vector<Review> vec = table->getCustomerGroup()->ReviewFood();
        for(Review rev:vec)
        {
          std::cout<<rev.getReviewComment()<<std::endl;
        }
    }
}
void Resturant::payBill()
{
    vector<Table*> tables = floor->getTables();
        for(Table* table: tables){
        if(table->getCustomerGroup()->PayBill())
        cout<<"Bill has been paid"<<endl;
    }
}
void Resturant::displayFloor()
{
    floor->printTablesAndWaiters();
}
void Resturant::giveOrdersToCustomers()
{
    //void CustomerGroup::receiveOrder(vector<Order*> orders)
    vector<Employee*> vec = floor->getWaiters();
    for(Employee* waiter: vec){
        Waiter* currWaiter = dynamic_cast<Waiter*>(waiter);
        currWaiter->deliverOrders();
    }
}