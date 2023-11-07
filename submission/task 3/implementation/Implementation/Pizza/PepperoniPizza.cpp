#include "PepperoniPizza.h"

PepperoniPizza::PepperoniPizza() : PizzaType()  {
	setName("Pepperoni Pizza");
	cout << "Creating Pepperoni Pizza" << endl;
    setCost(15.00);
}

PepperoniPizza::~PepperoniPizza() {
}
