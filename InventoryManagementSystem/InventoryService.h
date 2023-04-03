#pragma once

#include <vector>
#include <string>
#include <map>
#include <iostream>
#include "Item.h"
#include "Mobile.h"
#include "MobileCover.h"
#include "Jeans.h"
using namespace std;

class InventoryService
{
	int id;
	vector<Item *> items;
	vector<string> itemCategories;
	map<string, vector<string>> itemTypes;
public:
	InventoryService()
	{
		id = 1;
		itemCategories.push_back("Electronic");
		itemTypes["Electronic"].push_back("Mobile");
		itemTypes["Electronic"].push_back("MobileCover");
		itemCategories.push_back("Apparel");
		itemTypes["Apparel"].push_back("Jeans");
	}

	void InsertItem()
	{
		cout << "Enter item category\n";
		for (int i = 0; i < itemCategories.size(); i++)
		{
			cout << itemCategories[i] << "\n";
		}
		string category;
		cin >> category;
		if (itemTypes.find(category) == itemTypes.end())
		{
			cout << "Invalid category\n";
			return;
		}
		cout << "Enter item type\n";
		for (int i = 0; i < itemTypes[category].size(); i++)
		{
			cout << itemTypes[category][i] << "\n";
		}
		string type;
		cin >> type;

		InsertItemOfType(category, type);
	}

	void ShowItem(int itemId) const
	{
		for (int i = 0; i < items.size(); i++)
		{
			if (items[i]->GetId() == itemId)
			{
				cout<<items[i]->GetName() <<"\n";
				return;
			}
		}
		cout << "Item id " << itemId << " not found\n";
	}

	vector<int> GetItemsWithSearch(string search) const
	{
		vector<int> result;
		for (int i = 0; i < items.size(); i++)
		{
			if (items[i]->Match(search))
			{
				result.push_back(items[i]->GetId());
			}
		}
		return result;
	}

	/*void ListAllItems()
	{
		for (int i = 0; i < items.size(); i++)
		{
			cout << items[i]->PrintItem() << "\n";
		}
	}*/


	// InsertCategory(string newCategory)
	// InsertItemTypeInCategory(string category, string itemType)

private:
	void InsertItemOfType(string category, string type)
	{
		if (type == "Mobile")
		{
			Item *item = new Mobile(id++, category, type);
			items.push_back(item);
		}
		else if (type == "MobileCover")
		{
			Item *item = new MobileCover(id++, category, type);
			items.push_back(item);
		}
		else if (type == "Jeans")
		{
			Item *item = new Jeans(id++, category, type);
			items.push_back(item);
		}
		else
		{
			cout << "Invalid item type\n";
		}
	}
	
};