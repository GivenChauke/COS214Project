#ifndef FOOD_H
#define FOOD_H
#include <string>
#include <vector>
using namespace std;

class Food {

private:
	string name;
	vector<string> ingredients;
	int RandomFoodQuality;

public:
	string getName();
	void setName(string name);
	void addIngredient(string food);
	double getCost();
	void setCost(double d);
};

#endif
