#ifndef PIZZA_H
#define PIZZA_H

class Pizza : Food {

public:
	String name;

	string getName();

	void setName(string name);

	double getCost();

	void setCost(double d);

	void decorate(Pizza* p);

	double total();

	Pizza();
};

#endif
