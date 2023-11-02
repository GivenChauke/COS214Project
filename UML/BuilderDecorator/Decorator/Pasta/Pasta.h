#ifndef PASTA_H
#define PASTA_H
// #include "Food.h"
#include <string>
using namespace std;
#include <iostream>

class Pasta  {
private:
    double cost;
public:
	// string name;
	// string getName();
	// void setName(string name);

	Pasta();
	virtual void decorate(Pasta*) = 0;
	virtual double total() = 0;
	double getCost();
	void setCost(double cost);
	virtual ~Pasta();
};

#endif
