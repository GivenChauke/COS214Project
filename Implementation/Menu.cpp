#include "Menu.h"
#include <iomanip> 
Menu* Menu::Menu_instance = NULL;
Menu::Menu()
{
    // Burgers
    //FoodItem(name,price,method of prep,type)
    menu.push_back(new FoodItem("Beef", 10, "grill", "Burger"));
    menu.push_back(new FoodItem("Chicken", 9, "grill", "Burger"));
    menu.push_back(new FoodItem("Vegetarian", 8, "fryer", "Burger"));

    // Pasta Dishes
    menu.push_back(new FoodItem("Bolognaise", 12, "fryer", "Macaroni"));
    menu.push_back(new FoodItem("Alfredo", 11, "fryer", "Macaroni"));
    menu.push_back(new FoodItem("Carbonara", 10, "fryer", "Spaghetti"));

    // Pizzas
    menu.push_back(new FoodItem("Margherita", 13, "grill", "Pizza"));
    menu.push_back(new FoodItem("Pepperoni", 14, "grill", "Pizza"));
    menu.push_back(new FoodItem("MeatSupreme", 12, "grill", "Pizza"));

    // Cheeses
    menu.push_back(new FoodItem("Mozzarella", 2, "Melted", "Cheese"));
    menu.push_back(new FoodItem("Cheddar", 2, "Melted", "Cheese"));
    menu.push_back(new FoodItem("Goat Cheese", 3, "Melted", "Cheese"));

    // Sauces for decorator 
    menu.push_back(new FoodItem("Tomato", 1, "Simmered", "Sauce"));
    menu.push_back(new FoodItem("Alfredo", 2, "Simmered", "Sauce"));
    menu.push_back(new FoodItem("Pesto", 2, "Simmered", "Sauce"));

    // Extras
    menu.push_back(new FoodItem("Bacon", 3, "sliced", "Extra"));
    menu.push_back(new FoodItem("Avocado", 2, "Sliced", "Extra"));
    menu.push_back(new FoodItem("Onions", 2, "sliced", "Extra"));
    menu.push_back(new FoodItem("Chilli", 2, "Sliced", "Extra"));
}


Menu* Menu::getMenu()
{
    if(Menu_instance == NULL)
    {
        Menu_instance = new Menu();
    }
    return Menu_instance;
}

FoodItem::FoodItem(string n, int p, string m,string t)
{
    name = n;
    price = p;
    method = m;
    type = t;
}
FoodItem::~FoodItem()
{
}


string Menu::printMenu()
{
        
    const std::string resetColor = "\x1B[0m";
    const std::string redColor = "\x1B[31m";
    const std::string greenColor = "\x1B[32m";
    const std::string yellowColor = "\x1B[33m";
    if (Menu_instance == NULL)
    {
        return "Menu is empty.";
    }
    stringstream ss;
    ss<< "Menu:\n";
    ss<< "_____________________________________________________________________\n";
    ss<< "Item                     Type        Price     Preparation Method\n";
    for (FoodItem* item : menu)
    {
        ss<< left; // Set left alignment

        // Format each part of the menu item with setw
        ss<<greenColor << setw(25) << item->name <<greenColor;
        ss<< setw(13) << item->type <<yellowColor;
        ss<< setw(12) << "R" + to_string(item->price) <<redColor;
        ss<< setw(20) << item->method << resetColor;

        ss<< right; // Set right alignment
        ss<<"\n";
        
    }
    ss<< "_____________________________________________________________________\n";
    string menuString = ss.str();
    return menuString;
}

FoodItem* Menu::getFoodItem()
{
    return menu.front();
}
Menu::~Menu()
{
    delete Menu_instance;
}