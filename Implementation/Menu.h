#ifndef MENU
#define MENU

#include <string>
#include <iostream>
#include <vector>

using namespace std;

/**
 * @struct FoodItem
 * @brief Represents a food item with name, price, preparation method, and type.
 */
struct FoodItem{
    string name;   /**< The name of the food item. */
    int price;     /**< The price of the food item. */
    string method; /**< The preparation method of the food item. */
    string type;   /**< The type of food item (e.g., Burger, Pasta, etc.). */
    FoodItem(string, int, string, string);
    ~FoodItem();
};

/**
 * @class Menu
 * @brief Represents a menu for a restaurant.
 */
class Menu{
public:
    /**
     * @brief Gets the menu instance.
     * @return A pointer to the Menu instance.
     */
    static Menu* getMenu();

    /**
     * @brief Prints the menu.
     * @return A string containing the formatted menu.
     */
    string printMenu();

    /**
     * @brief Destroys the Menu instance.
     */
    ~Menu();

    /**
     * @brief returns a foodItem, for testing purposes
     */
    FoodItem* getFoodItem();
    vector<FoodItem*> menu;  /**< A vector to store food items in the menu. */

protected:
    /**
     * @brief Constructs a Menu instance.
     */
    Menu();



private:

    static Menu* Menu_instance; /**< The singleton instance of the Menu class. */
};

#endif