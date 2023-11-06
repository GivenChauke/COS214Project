#include "MargheritaPizza.h"

MargheritaPizza::MargheritaPizza() : PizzaType() {
	setName("Margherita Pizza");
	cout << "Creating Margherita Pizza" << endl;
    setCost(10.00);
}

MargheritaPizza::~MargheritaPizza() {
}
