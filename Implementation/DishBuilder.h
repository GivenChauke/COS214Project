#ifndef DISHBUILDER_H
#define DISHBUILDER_H
#include "AbstractDishBuilder.h"
#include "Food.h"
#include <cstdlib>

class DishBuilder : public AbstractDishBuilder {
public:
	// Food* foodItem;

	// void buildPasta();
	DishBuilder(); 
	void buildPasta(string type, string base);
	void buildBurger(string type, string base);
	void buildPizza(string type, string base);
	void addExtras(string);
	virtual ~DishBuilder();
	Food* getFood();
};

#endif
