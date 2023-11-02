#include <gtest/gtest.h>
#include "Menu.cpp"

namespace {

// Test Menu Class
// Test if the menu has foodItems
TEST(MenuTest, MenuHasFoodItems) {
    Menu* menu = Menu::getMenu();
    FoodItem* test = menu->getFoodItem();
    EXPECT_EQ(menu->getFoodItem(), test);
}
// Test if the menu is one instance
TEST(MenuTest, MenuSameInstance) {
    Menu* menu = Menu::getMenu();
    Menu* menu1 = Menu::getMenu();
    EXPECT_EQ(menu->printMenu(), menu1->printMenu());
}
// Test if the menu is not empty
TEST(MenuTest, MenuEmptyNotEmpty) {
    string menu = Menu::getMenu()->printMenu();
    EXPECT_NE(menu.find("Classic Beef Burger"), std::string::npos);
}

// Test if the menu item formatting is correct
TEST(MenuTest, MenuItemFormatting) {
    Menu* menu = Menu::getMenu();
    EXPECT_NE(menu, nullptr);
    string menuString = menu->printMenu();
    // Check for specific formatting in the menu item
    EXPECT_NE(menuString, "Classic Beef Burger\t\tPrice: $10\tType: Burger\tPreparation Method: Grilled");
    //delete menu;
}


}  // namespace
