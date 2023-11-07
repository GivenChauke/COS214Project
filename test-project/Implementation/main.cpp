#include "Resturant.h"
#include <iostream>

using namespace std;
int main(){
    int choice = 0;
    bool proceed = true;
    Resturant* engine = new Resturant();
    const std::string blueColor = "\x1B[34m";
    const std::string resetColor = "\x1B[0m";
    engine->createResturant();
    engine->createCustomerGroup();
    do{
        
        std::cout <<blueColor<< "Restaurant Management System: " <<resetColor<< std::endl;
        std::cout <<blueColor<< "1. View Menu" <<resetColor<< std::endl; 
        std::cout <<blueColor<< "2. View Resturant floor" <<resetColor<< std::endl; 
        std::cout <<blueColor<< "3. Collect Order From Customer Groups/Table" <<resetColor<< std::endl; 
        std::cout <<blueColor<< "4. Cook Orders" <<resetColor<< std::endl; 
        std::cout <<blueColor<< "5. Give Order to Customers" <<resetColor<< std::endl; 
        std::cout <<blueColor<< "6. Review Food" <<resetColor<< std::endl; 
        std::cout <<blueColor<< "7. Pay Bill" <<resetColor<< std::endl;
        std::cout <<blueColor<< "8. Exit" <<resetColor<< std::endl;
        std::cout <<blueColor<< "Enter your choice: "; 
        std::cin>>choice;
        std::cout<<resetColor<<std::endl;
        switch(choice){
            case 1: {
                engine->displayMenu();
            }
            case 2:
            {
                engine->displayFloor();
                break;
            }
            case 3:
            {
                engine->collectOrderFromCustomerGroup();
                break;
            }
            case 4:
            {
                engine->cookOrders();
                break;
            }
            case 5:
            {
                engine->giveOrdersToCustomers();
                break;
            }
            case 6:
            {
                engine->reviewFood();
                break;
            }
            case 7:
            {
                engine->payBill();
                break;
            }
            case 8:
            {
                proceed = false;
                break;
            }
            default:{
            std::cout<<"Error: Invalid option chosen"<<std::endl;
            std::cout<<"please choose valid option(1 to 14)"<<std::endl;
            }
        }
    }
    while (proceed);
    
    return 0;
}