#ifndef CHEF_H
#define CHEF_H
#include "DishBuilder.h"
#include "Order.h"
#include <string>

class Chef {

private:
	Chef* nextChef;
	AbstractDishBuilder* dishBuilder;
	string typeOfChef;

public:
	Dish cook(Order o);


};

#endif
