#pragma once
#ifndef __CALCULATE_H_
#define __CALCULATE_H_

#include "RoomCafe.h"

class Calculate
{
private:
	int numOfPeople;
	int Result;

public:
	Calculate(int N);
	void Choice(OfferThings& things);
	void ShowDataInfo();
};

#endif
