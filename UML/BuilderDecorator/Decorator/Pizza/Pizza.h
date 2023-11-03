#ifndef PIZZA_H
#define PIZZA_H
#include "../Food.h"
#include <string>
using namespace std;
#include <iostream>

class Pizza: public Food {
private:
    double cost;
public:
	// string name;
	// string getName();
	// void setName(string name);

	Pizza();
	virtual void decorate(Pizza*) = 0;
	virtual double total() = 0;
	double getCost();
	void setCost(double cost);
	virtual ~Pizza();
};

#endif
