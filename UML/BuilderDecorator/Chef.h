#ifndef CHEF_H
#define CHEF_H

class Chef {

private:
	Chef* nextChef;
	AbstractDishBuilder* dishBuilder;
	string typeOfChef;

public:
	Dish cook(Order o);

	string getType();

	void setNextChef(int Chef);

	void process();

	void chefChainHandler();
};

#endif
