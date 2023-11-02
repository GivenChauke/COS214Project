#ifndef PIZZA_H
#define PIZZA_H
#include "Food.h"
#include <string>
using namespace std;

class Pizza : public Food {
private:
    double cost;
public:
	// string name;
	// string getName();
	// void setName(string name);

	Pizza();
	virtual void decorate(Pizza*);
	virtual double total();
	double getCost();
	void setCost(double cost);
	virtual ~Pizza();
};

#endif
