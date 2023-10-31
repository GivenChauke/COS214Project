#ifndef BURGER_H
#define BURGER_H

class Burger : Food {

public:
	String name;

	string getName();

	void setName(string name);

	double getCost();

	void setCost(double d);

	double total();
};

#endif
