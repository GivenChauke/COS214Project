#include "Order.h"
#include <iostream>

using namespace std;

string passedTest(bool passed){

    if(passed){
        return "\033[32mPassed\033[0m";
    } else return "\032[31mFailed\033[0m";

}

void readyStatusTest(Order* order){
    cout << "Testing Ready Status: ";
    string expectedStatus = "Ready";
    order->toReadyStatus();
    string status =  order->getOrderStatus();
    if(expectedStatus == status){
        cout << passedTest(true) << endl;
    }
    else cout << passedTest(false) << endl;
}

void processingStatusTest(Order* order){
    cout << "Testing Processing Status: ";
    string expectedStatus = "Processing";
    order->toProcessingStatus();
    string status =  order->getOrderStatus();
    if(expectedStatus == status){
        cout << passedTest(true) << endl;
    }
    else cout << passedTest(false) << endl;
}

void receivedStatusTest(Order* order){
    cout << "Testing Received Status: ";
    string expectedStatus = "Received";
    order->toReceivedStatus();
    string status =  order->getOrderStatus();
    if(expectedStatus == status){
        cout << passedTest(true) << endl;
    }
    else cout << passedTest(false) << endl;
}

int main(){
    Order* order = new Order();
    cout << "Order object created" << endl;
    cout << "Testing the functions which change the status of order or something" << endl;
    receivedStatusTest(order);
    readyStatusTest(order);
    processingStatusTest(order);
    readyStatusTest(order);
    readyStatusTest(order);
    processingStatusTest(order);
    readyStatusTest(order);
    cout << "Done" << endl;
    delete order;
}