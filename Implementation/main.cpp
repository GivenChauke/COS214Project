#include "ResturantFacade.h"
#include <iostream>

using namespace std;
int main(){
    int choice = 0;
    bool proceed = true;
    ResturantFacade* engine = new ResturantFacade();
    const std::string blueColor = "\x1B[34m";
    const std::string resetColor = "\x1B[0m";
    do{
        
        std::cout <<blueColor<< "Restaurant Management System: " <<resetColor<< std::endl;
        std::cout <<blueColor<< "1. Request a table" <<resetColor<< std::endl; 
        std::cout <<blueColor<< "2. Place an order" <<resetColor<< std::endl; 
        std::cout <<blueColor<< "3. Cook an order" <<resetColor<< std::endl; 
        std::cout <<blueColor<< "4. Get cooked Orders" <<resetColor<< std::endl; 
        std::cout <<blueColor<< "5. Manage tables" <<resetColor<< std::endl; 
        std::cout <<blueColor<< "6. Manage customer groups" <<resetColor<< std::endl; 
        std::cout <<blueColor<< "7. Show customer feedback" <<resetColor<< std::endl;
        std::cout <<blueColor<< "8. Book a table" <<resetColor<< std::endl; 
        std::cout <<blueColor<< "9. View the menu" <<resetColor<< std::endl; 
        std::cout <<blueColor<< "10. Create a custom order" <<resetColor<< std::endl;
        std::cout <<blueColor<< "11. Manage chefs" <<resetColor<< std::endl; 
        std::cout <<blueColor<< "12. Handle customer feedback" <<resetColor<< std::endl; 
        std::cout <<blueColor<< "13. Start a tab" <<resetColor<< std::endl; 
        std::cout <<blueColor<< "14. Exit" <<resetColor<< std::endl; 
        std::cout <<blueColor<< "Enter your choice: "; 
        std::cin>>choice;
        std::cout<<resetColor<<std::endl;
        switch(choice){
            case 2:
            {
                engine->placeOrder();
                break;
            }
            case 3:
            {
                engine->cook();
            }
            case 4:
            {
                engine->getOrders();
                break;
            }
            case 9:
            {
                engine->DisplayMenu();
                break;
            }
            case 14:
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