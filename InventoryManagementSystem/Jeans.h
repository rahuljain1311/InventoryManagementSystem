#pragma once

#include <vector>
#include <string>
#include <map>
#include <iostream>
#include "Item.h"
using namespace std;

class Jeans : public Item
{
	string brand;
	string color;
public:
	Jeans(int productId, string productCategory, string productType)
	{
		id = productId;
		category = productCategory;
		type = productType;
		cout << "Enter brand name\n";
		cin >> brand;
		cout << "Enter color\n";
		cin >> color;
		cout << "Enter name\n";
		cin >> name;
		cout << "Enter price\n";
		cin >> price;
	}

	bool Match(string search) const override
	{
		if (search.find(name) != string::npos)
			return true;
		if (search.find(color) != string::npos)
			return true;
		if (search.find(brand) != string::npos)
			return true;
		return false;
	}
};