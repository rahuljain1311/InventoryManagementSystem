#pragma once

#include <vector>
#include <string>
#include <map>
#include <iostream>
#include "Item.h"
using namespace std;

class MobileCover : public Item
{
	string companyName; // Need enum of companies
	string color;  // Need enum of colors
public:
	MobileCover(int productId, string productCategory, string productType)
	{
		id = productId;
		category = productCategory;
		type = productType;
		cout << "Enter mobile cover name\n";
		cin >> name;
		cout << "Enter mobile cover companyName\n";
		cin >> companyName;
		cout << "Enter mobile cover color\n";
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