#include "MeatSupremePizza.h"

MeatSupremePizza::MeatSupremePizza() : PizzaType()  {
	setName("Meat Supreme Pizza");
	cout << "Creating Meat Supreme Pizza" << endl;
    setCost(15.00);
}

MeatSupremePizza::~MeatSupremePizza() {
}
