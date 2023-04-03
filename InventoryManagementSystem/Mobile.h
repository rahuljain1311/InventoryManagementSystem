#pragma once

#include <vector>
#include <string>
#include <map>
#include <iostream>
#include "Item.h"
using namespace std;

class Mobile : public Item
{
	string companyName; // Need enum of companies
	int ram; // need enum or 1, 2, 3, 4, 6, 8, 16, etc
	int storage;
	string color;  // Need enum of colors
public:
	Mobile(int productId, string productCategory, string productType)
	{
		id = productId;
		category = productCategory;
		type = productType;
		cout << "Enter mobile name\n";
		cin >> name;
		cout << "Enter mobile ram\n";
		cin >> ram;
		cout << "Enter mobile storage\n";
		cin >> storage;
		cout << "Enter mobile color\n";
		cin >> color;
		cout << "Enter price\n";
		cin >> price;
	}

	bool Match(string search) const override
	{
		if (search.find(name) != string::npos)
			return true;
		if (search.find(color) != string::npos)
			return true;
		if (search.find(companyName) != string::npos)
			return true;
		return false;
	}
};