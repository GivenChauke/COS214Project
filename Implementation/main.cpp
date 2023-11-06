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

#include "Bill.h"
#include "AbstractTable.h"
#include "Table.h"
#include "CombinedTable.h"

void InitializeTest();
void InitialTest2();
void TestOrder();
void TestCustomer();
void TestTables();
void TestCustomerGroup();

void TestBillNyana();
int main()
{
   TestTables();
    return 0;
}


void TestTables()
{
    AbstractTable* Tableone=new Table();
    AbstractTable* Tabletwo= new Table();
    AbstractTable* Tablethree= new Table();
    AbstractTable* Tablefour= new CombinedTable();

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

    Customer one2;
    Customer two2;
    Customer three2;
    Customer four2;
    Customer five2;
    CustomerGroup  twoGroup;
    twoGroup.addCustomer(one2);
    twoGroup.addCustomer(two2);
    twoGroup.addCustomer(three2);
    twoGroup.addCustomer(four2);
    twoGroup.addCustomer(five2);

    Customer one3;
    Customer two3;
    Customer three3;
    Customer four3;
    Customer five3;
    CustomerGroup  threeGroup;
    threeGroup.addCustomer(one2);
    threeGroup.addCustomer(two2);
    threeGroup.addCustomer(three2);
    threeGroup.addCustomer(four2);
    threeGroup.addCustomer(five2);

    Tableone->setCustomerGroup(oneGroup);

    Tabletwo->setCustomerGroup(twoGroup);

    Tablefour->setCustomerGroup(threeGroup);


    Tablefour->AddTable(Tabletwo);

    vector<Order*> Vectorfive=Tableone->PlaceOrder();
    vector<Order*> Vectorten=Tablefour->PlaceOrder();

    cout<<Vectorfive.size()<<endl;
    cout<<Vectorten.size()<<endl;
  //  delete Tablefour;
    

    

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