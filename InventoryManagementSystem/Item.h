#pragma once

#include <string>
using namespace std;

class Item
{
protected:
	int id;
	int price;
	string category;
	string type;
	string name;

public:
	int GetId();
	string GetName();
	string GetCategory();
	string GetType();
	int GetPrice();
	virtual bool Match(string search) const = 0;
};