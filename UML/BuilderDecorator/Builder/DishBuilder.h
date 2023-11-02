#ifndef DISHBUILDER_H
#define DISHBUILDER_H
#include "AbstractDishBuilder.h"
#include "Food.h"

class DishBuilder : public AbstractDishBuilder {

public:
	Food* foodItem;

	void buildPasta();

	void buildBurger();

	void buildPizza();

	Food* getFood();
};

#endif
