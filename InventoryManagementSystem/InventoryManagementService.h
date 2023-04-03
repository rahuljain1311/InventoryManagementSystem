#pragma once

#include <vector>
#include "InventoryService.h"
#include "SearchService.h"
using namespace std;

class InventoryManagementService
{
	InventoryService inventoryService;
	SearchService searchService;
public:
	void InsertItem()
	{
		inventoryService.InsertItem();
	}

	void SearchItem()
	{
		searchService.SearchItem(inventoryService);
	}
};
