#ifndef DISHBUILDER_H
#define DISHBUILDER_H
#include "AbstractDishBuilder.h"
#include "Food.h"

class DishBuilder : public AbstractDishBuilder {

public:
	// Food* foodItem;

	// void buildPasta();
	void buildPasta(string pastaType, string baseType);
	void buildBurger(string burgerTopping, string baseType);
	void buildPizza(string pizzaType, string baseType);
	Food* getFood();
};

#endif
