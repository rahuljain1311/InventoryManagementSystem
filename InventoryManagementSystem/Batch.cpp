#include "Batch.h"
#include <iostream>

using namespace std;

Batch::Batch(int inputId, int inputValidityPeriod, int inputDistributor, int inputMaxAllowedGrants, string inputIsOpen, int inputWorth)
{
	this->id = inputId;
	validityPeriod = inputValidityPeriod;
	distributor = inputDistributor;
	state = CREATED;
	worth = inputWorth;

	if (inputIsOpen == "true")
	{
		distributor = OPEN;
		maxAllowedGrants = inputMaxAllowedGrants;
	}
	else
		distributor = CLOSED;
}

int Batch::getId()
{
	return id;
}

void Batch::updateState(enum BatchState nextState)
{
	if (state == CREATED && nextState == APPROVED)
	{
		state = APPROVED;
		cout << "State updated\n";
		return;
	}
	
	cout << "Invalid transition\n";
}
