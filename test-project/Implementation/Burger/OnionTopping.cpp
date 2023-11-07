#include "OnionTopping.h"

OnionTopping::OnionTopping() : BurgerTopping() {
	setName("Onion Topping");
	cout << "Creating Onion Topping" << endl;
	setCost(2.0);
}

OnionTopping::~OnionTopping() {
}
