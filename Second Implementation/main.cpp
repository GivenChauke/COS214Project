#include<iostream>
using namespace std;
#include "CustomerState.h"
#include "Happy.h"
#include "Angry.h"
#include "Neutral.h"

#include "TableState.h"
#include "Waiting.h"
#include "ReadyToOrder.h"
#include "NotOccupied.h"
#include "NotReadyToOrder.h"
#include "Customer.h"
#include "CustomerGroup.h"
#include "Floor.h"
#include "Bill.h"


void InitializeTest();
void InitialTest2();
void TestOrder();
void TestCustomer();

void TestCustomerGroup();

void TestBillNyana();
int main()
{
    TestCustomerGroup();
    cout << "After testing customer group" << endl;
    CustomerGroup* group = new CustomerGroup(), *group2 = new CustomerGroup(), *group3 = new CustomerGroup();
    cout << "CustomerGroup pointer created" << endl;
    for(int i=0; i < 7; i++){
        Customer customer ("Customer-" + std::to_string(i));
        group->addCustomer(customer);

    }
    for(int i = 0; i < 23; i++){
        Customer customer("Client-" + std::to_string(i));
        group2->addCustomer(customer);

    }
    for(int i = 0; i < 3; i++){
        Customer customer("Consumer-" + std::to_string(i));
        group3->addCustomer(customer);

    }

    cout << "Customers added to customer group" << endl;

    Floor* floor = new Floor(6);
    cout << "Floor created with capacity = 6" << endl;
    floor->createWaiter();
    cout << "Waiter1 created" << endl;
    floor->createManager();
    cout << "Manager created" << endl;
    floor->createWaiter();
    cout << "Waiter2 created" << endl;
    floor->addCustomerGroup(group);

    cout << "Customer group added" << endl;
    floor->printTablesAndWaiters();
    cout << "Tables and waiters printed" << endl;
    floor->addCustomerGroup(group2);

    cout << "Customer group added" << endl;
    floor->printTablesAndWaiters();
    cout << "Tables and waiters printed" << endl;

    floor->addCustomerGroup(group3);

    cout << "Customer group added" << endl;
    floor->printTablesAndWaiters();
    cout << "Tables and waiters printed" << endl;
    for(int i = 0; i < 5; i ++){
        floor->waiterIterateTables();
    }

    return 0;
}

void TestCustomerGroup()
{
    Customer one;
    Customer two;
    Customer three;
    Customer four;
    Customer five;

    CustomerGroup  oneGroup;
    oneGroup.addCustomer(one);
    oneGroup.addCustomer(two);
    oneGroup.addCustomer(three);
    oneGroup.addCustomer(four);
    oneGroup.addCustomer(five);
    cout<<"edrf\n";
    oneGroup.print();
    cout<<oneGroup.NumOfCustomer()<<endl;
    cout<<oneGroup.CustomerAt(0).getID()<<endl;

    vector<Order*> oo=oneGroup.PlaceOrder();
    for(int i=0; i<oo.size(); i++)
    {
        oo[i]->print();
    }

    AbstractTable* table = new Table();



}

void TestCustomer()
{
    Customer one;
    cout<<one.getID()<<endl;
    cout<<one.getState()->getStatus()<<endl;
    CustomerState* happy= new Happy();
    one.setState(happy);
    cout<<one.GiveComment_Food()<<"\n";
    cout<<one.GiveComment_Service()<<"\n";
    cout<<one.GiveRating_Food()<<"\n";
    cout<<one.GiveRating_Service()<<"\n";

    Order* ord=one.PlaceOrder();
    //ord->print();
}

void TestOrder()
{
    Order o;
}

void TestBillNyana()
{
    Bill bill;
}
void InitialTest2()
{
    TableState* notOccupied= new NotOccupied();
    cout<<notOccupied->getStatus()<<endl;
    delete notOccupied;

    TableState* notReady= new NotReadyToOrder();
    cout<<notReady->getStatus()<<endl;
    delete notReady;

    TableState* Ready= new ReadyToOrder();
    cout<<Ready->getStatus()<<endl;
    delete Ready;

    TableState* waiting= new Waiting();
    cout<<waiting->getStatus()<<endl;
    delete waiting;


}
void InitializeTest()
{
    CustomerState* happy= new Happy();
    happy->action();
    cout<<" "<< happy->getStatus()<<endl;
    delete happy;

    CustomerState* angry= new Angry();
    angry->action();
    cout<<" "<< angry->getStatus()<<endl;
    delete angry;

    CustomerState* neutral= new Neutral();
    neutral->action();
    cout<<" "<< neutral->getStatus()<<endl;
    delete neutral;

}
