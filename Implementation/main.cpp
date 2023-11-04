#include "Floor.h"
#include <iostream>

using namespace std;

int main(){

    CustomerGroup* group = new CustomerGroup();
    for(int i=0; i < 7; i++){
        Customer* customer = new Customer("Customer-" + std::to_string(i));
        group->addCustomer(customer);

    }

    Floor* floor = new Floor(6);
    floor->createWaiter();
    floor->createManager();
    floor->createWaiter();
    floor->addCustomerGroup(group);
    floor->printTablesAndWaiters();





    return 0;
}