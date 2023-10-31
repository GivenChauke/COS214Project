#ifndef PASTA_H
#define PASTA_H

class Pasta : Food {

public:
	String name;

	string getName();

	void setName(string name);

	double getCost();

	void setCost(double d);

	void decorate(Pasta* p);

	double total();
};

#endif
