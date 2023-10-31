#include "Menu.h"
#include <iomanip> 
Menu* Menu::Menu_instance = NULL;
Menu::Menu()
{
    // Burgers
    menu.push_back(new FoodItem("Classic Beef Burger", 10, "Grilled", "Burger"));
    menu.push_back(new FoodItem("Chicken Burger", 9, "Grilled", "Burger"));
    menu.push_back(new FoodItem("Veggie Burger", 8, "Grilled", "Burger"));

    // Pasta Dishes
    menu.push_back(new FoodItem("Spaghetti Bolognese", 12, "Fried", "Pasta"));
    menu.push_back(new FoodItem("Penne Alfredo", 11, "Fried", "Pasta"));
    menu.push_back(new FoodItem("Vegetable Primavera", 10, "Fried", "Pasta"));

    // Pizzas
    menu.push_back(new FoodItem("Margherita Pizza", 13, "Grilled", "Pizza"));
    menu.push_back(new FoodItem("Pepperoni Pizza", 14, "Grilled", "Pizza"));
    menu.push_back(new FoodItem("Mushroom & Olive Pizza", 12, "Grilled", "Pizza"));

    // Proteins
    menu.push_back(new FoodItem("Grilled Chicken", 5, "Grilled", "Protein"));
    menu.push_back(new FoodItem("Sausage", 4, "Grilled", "Protein"));
    menu.push_back(new FoodItem("Tofu", 4, "Grilled", "Protein"));

    // Vegetables
    menu.push_back(new FoodItem("Spinach", 2, "Fried", "Vegetable"));
    menu.push_back(new FoodItem("Bell Peppers", 2, "Fried", "Vegetable"));
    menu.push_back(new FoodItem("Mushrooms", 3, "Fried", "Vegetable"));

    // Cheeses
    menu.push_back(new FoodItem("Mozzarella", 2, "Melted", "Cheese"));
    menu.push_back(new FoodItem("Cheddar", 2, "Melted", "Cheese"));
    menu.push_back(new FoodItem("Goat Cheese", 3, "Melted", "Cheese"));

    // Sauces for decorator 
    menu.push_back(new FoodItem("Tomato Sauce", 1, "Simmered", "Sauce"));
    menu.push_back(new FoodItem("Alfredo Sauce", 2, "Simmered", "Sauce"));
    menu.push_back(new FoodItem("Pesto Sauce", 2, "Simmered", "Sauce"));

    // Extras
    menu.push_back(new FoodItem("Bacon", 3, "Fried", "Extra"));
    menu.push_back(new FoodItem("Avocado", 2, "Sliced", "Extra"));
    menu.push_back(new FoodItem("Caramelized Onions", 2, "Fried", "Extra"));
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


string Menu::printMenu()
{
    if (Menu_instance == NULL)
    {
        return "Menu is empty.";
    }
    stringstream ss;
    ss<< "Menu:\n";
    ss<< "_____________________________________________________________________\n";
    ss<< "Item                    Price       Type     Preparation Method\n";
    for (FoodItem* item : menu)
    {
        ss<< left; // Set left alignment

        // Format each part of the menu item with setw
        ss<< setw(25) << item->name;
        ss<< setw(10) << "R" + to_string(item->price);
        ss<< setw(10) << item->type;
        ss<< setw(20) << item->method;

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