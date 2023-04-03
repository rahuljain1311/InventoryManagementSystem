// InventoryManagementService.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "InventoryManagementService.h"
using namespace std;

void driver()
{
    InventoryManagementService inventoryManagementService;
    while (1)
    {
        cout << "1. Insert Item\n";
        cout << "2. Search Item\n";
        cout << "8. Exit\n";
        int userInput;
        cin >> userInput;
        switch (userInput)
        {
            case 8:
                return;
            case 1:
            {
                inventoryManagementService.InsertItem();
                break;
            }
            case 2:
            {
                inventoryManagementService.SearchItem();
                break;
            }
            default:
            {
                cout << "Invalid input\n";
                return;
            }
        }
    }
}

int main()
{
    driver();
    std::cout << "Thank you!\n";
}

/*
Next Items:
1. Move the implementations into .cpp files
2. Different folders for .cpp and .h
3. Add UTs for Inventory search
4. UTs for Match() API to behave as expected
5. Advanced search
*/