#pragma once

#include <string>
#include "Item.h"
using namespace std;

int Item::GetId()
{
	return id;
}
string Item::GetName()
{
	return name;
}
string Item::GetCategory()
{
	return category;
}
string Item::GetType()
{
	return type;
}
int Item::GetPrice()
{
	return price;
}