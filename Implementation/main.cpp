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


#include "Bill.h"


void InitializeTest();
void InitialTest2();

void TestBillNyana();
int main()
{
   TestBillNyana();
    return 0;
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