#ifndef BURGER_H
#define BURGER_H
#include "Food.h"
#include <string>
using namespace std;

class Burger : public Food {

public:
	// string name;
	// string getName();
	// void setName(string name);

	// double getCost();
	// void setCost(double d);
	double total() ;
	virtual void decorate(Burger* burger) = 0;
	Burger();
	virtual ~Burger();
};

#endif
