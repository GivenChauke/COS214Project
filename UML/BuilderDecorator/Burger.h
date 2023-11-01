#ifndef BURGER_H
#define BURGER_H
#include "Food.h"
#include <string>
using namespace std;

class Burger : Food {

public:
	string name;
	string getName();
	void setName(string name);

	double getCost();
	void setCost(double d);
	virtual double total();
	virtual void decorate(Burger*);
	Burger();
	~Burger();
};

#endif
