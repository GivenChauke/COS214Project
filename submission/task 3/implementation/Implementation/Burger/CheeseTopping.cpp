#include "CheeseTopping.h"

CheeseTopping::CheeseTopping() : BurgerTopping() {
	setName("Cheese");
	cout << "Creating Cheese Topping" << endl;
	setCost(1.0);
}

CheeseTopping::~CheeseTopping() {
}