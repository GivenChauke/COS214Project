#ifndef FOOD_H
#define FOOD_H
#include <string>
#include <vector>
using namespace std;
#include <iostream>

class Food {
private:
	string name;
	vector<string> ingredients;
	// int RandomFoodQuality;
	double cost;
public:
	Food();
	string getName();
	void setName(string name);
	void addIngredient(string ingredient);
	virtual double total() = 0;
	double getCost();
	void setCost(double cost);
	virtual ~Food();
	};

#endif
