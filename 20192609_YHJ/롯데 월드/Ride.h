#pragma once
#ifndef __RIDE_H
#define __RIDE_H

static int cnt;
class Ride
{
	int cost, num, min;
	int age;//정원 9, min 10분
	mutable int height;
	int WPC;
public:
	Ride() { num = 10, min = 10, age = 14, WPC = 1, height = 150; }
	Ride(int n, int m, int myAge, int wpc) : num(n), min(m), age(myAge), WPC(wpc) {}
	Ride(int n, int m, int myAge, int wpc, int h) : num(n), min(m), age(myAge), WPC(wpc), height(h) {} //오버로딩

	enum AGE { CHILED = 1, STUDENT, ADULT, GRAND, EMPTY };

	inline int SaleRide(int myAge, int n) //티켓팔기
	{
		int CheckAge = 0;
		if (myAge > 0)
		{
			if (myAge <= 13) //어린이
				CheckAge = AGE::CHILED;
			else if (myAge <= 18)
				CheckAge = AGE::STUDENT;
			else if (myAge <= 55)
				CheckAge = AGE::ADULT;
			else
				CheckAge = AGE::GRAND;
		}
		else
			CheckAge = AGE::EMPTY;

		if (CheckAge == 1)
			cost = 1000;
		else if (CheckAge == 2)
			cost = 2000;
		else if (CheckAge == 3)
			cost = 3000;
		else if (CheckAge == 4)
			cost = 1500;
		else
			cost = 3000;
		return cost * n;
	}
	Ride& SetSeat(int n)
	{
		num -= n;
		return *this; //this
	}
	bool Full(int n); //정원 찼는지
	bool WaitTime(int m); //시간
	bool HeightCheck(int h) const; //키 체크
	void WithParents() const; //부모님과 함께왔는지
};

#endif
