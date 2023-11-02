#ifndef PIZZA_H
#define PIZZA_H
#include "Food.h"
#include <string>
using namespace std;

class Pizza : public Food {
public:
	// string name;
	// string getName();
	// void setName(string name);

	// double getCost();
	// void setCost(double d);
	virtual void decorate(Pizza* pizza) = 0;
	virtual double total()= 0;
	Pizza();
	virtual ~Pizza();
};

#endif
