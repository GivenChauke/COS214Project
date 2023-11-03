#ifndef DISHBUILDER_H
#define DISHBUILDER_H
#include "AbstractDishBuilder.h"
#include "Food.h"

class DishBuilder : public AbstractDishBuilder {
private:
	string type;
	string base;
public:
	// Food* foodItem;

	// void buildPasta();
	void buildPasta(string type, string base);
	void buildBurger(string type, string base);
	void buildPizza(string type, string base);
	virtual ~DishBuilder();
	// Food* getFood();
};

#endif
