#pragma once

#include <vector>
using namespace std;

class SearchService
{
	vector<pair<int, int>> BasicSearch(const InventoryService &inventoryService, string searchString)
	{
		vector<pair<int, int>> results;

		vector<int> matchingItems = inventoryService.GetItemsWithSearch(searchString);
		
		for (int i = 0; i < matchingItems.size(); i++)
		{
			results.push_back(make_pair(10, matchingItems[i]));
		}
		return results;
	}

	vector<pair<int, int>> AdvancedSearch(const InventoryService &inventoryService, string searchString, vector<pair<int, int>> basicResult)
	{
		// Get category list
		// get category synonyms
		// make search string
		// inventoryService.GetItemsWithSearch(searchString);
		// add 5 to all elements which are already in basic result
		// sort by weight
		// return result sorted by weight
	}
public:
	void SearchItem(const InventoryService& inventoryService)
	{
		string searchString;
		cout << "\n Enter search string\n";
		cin >> searchString;
		vector<pair<int, int>> itemList = BasicSearch(inventoryService, searchString);
		for (int i = 0; i < itemList.size(); i++)
		{
			inventoryService.ShowItem(itemList[i].second);
		}
	}
};