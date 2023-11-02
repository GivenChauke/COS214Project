#ifndef PASTA_H
#define PASTA_H
#include "Food.h"
#include <string>
using namespace std;

class Pasta : public Food {
public:
	// string name;
	// string getName();
	// void setName(string name);

	// double getCost();
	// void setCost(double d);
	virtual void decorate(Pasta* pasta) = 0;
	virtual double total() = 0;
	Pasta();
	~Pasta();
};

#endif
