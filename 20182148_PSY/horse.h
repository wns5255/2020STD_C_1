#ifndef __HORSE_H
#define __HORSE_H
#include <iostream>
using namespace std;
class Horse
{
	int cost, num, min; //정원 9, min 10분간격
public:
	Horse() : cost(1000), num(9), min(10) {}
	int SaleHorse(int n)
	{
		int real_cost = 0;
		real_cost = cost * n;
		return real_cost;
	}
	int Seat(int n)
	{
		int seat = 0;
		if (n <= num)
			seat = n;
		else
			seat = num;
		return seat;
	}
	bool Full(int n)
	{
		if (n <= num)
			return true;
		else
			return false;
	}
	bool  WaitTime(int m)
	{
		if (m % min == 0)
			return true;
		else
			return false;
	}

};

#endif