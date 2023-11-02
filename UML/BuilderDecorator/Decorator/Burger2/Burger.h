#ifndef BURGER_H
#define BURGER_H
// #include "Food.h"
#include <string>
using namespace std;
#include <iostream>

class Burger  {
private:
    double cost;
public:
	// string name;
	// string getName();
	// void setName(string name);

	Burger();
	virtual void decorate(Burger*) = 0;
	virtual double total() = 0;
	double getCost();
	void setCost(double cost);
	virtual ~Burger();
};

#endif
