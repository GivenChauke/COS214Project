#ifndef DISHBUILDER_H
#define DISHBUILDER_H

class DishBuilder : AbstractDishBuilder {

public:
	Food* foodItem;

	void buildPasta();

	void buildBurger();

	void buildPizza();

	Food* getFood();
};

#endif
