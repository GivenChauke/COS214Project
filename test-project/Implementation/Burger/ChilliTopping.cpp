#include "ChilliTopping.h"

ChilliTopping::ChilliTopping() : BurgerTopping() {
	setName("Chilli Topping");
	cout << "Creating Chilli Topping" << endl;
	setCost(1.0);
}

ChilliTopping::~ChilliTopping() {
}
