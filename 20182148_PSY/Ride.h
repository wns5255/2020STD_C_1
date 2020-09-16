#ifndef __RIDE_H
#define __RIDE_H
#include "Person.h"

static int cnt;

class Ride :public Person
{
	int Rcost, Rnum, Rmin;
	int Rage;//정원 9, min 10분
	mutable int Rheight;
public:
	Ride() { Rnum = 10, Rmin = 10, Rage = 14, Rheight = 150; }
	Ride(int n, int m, int myAge) : Rnum(n), Rmin(m), Rage(myAge) {}
	Ride(int n, int m, int myAge, int h) : Rnum(n), Rmin(m), Rage(myAge), Rheight(h) {} //오버로딩
	void Check()
	{
		if (WithParents() == true or false)
		{
			if (HeightCheck() == true)
			{
				if (Full() && WaitTime())
					cout << "탑승하세요" << endl;
				else if (WaitTime() == 0 or Full() == 0)
					if (WaitTime() == 0)
						cout << min % 10 << "분 뒤 탑승 가능" << endl;
					else if (Full() == 0)
						cout << "정원으로 인해 탑승 불가능" << endl;
			}
			else
				cout << "키로 인해 탑승 불가능합니다." << endl;
		}

	}


	bool Full()
	{
		if (1 <= num)
			return true;
		else
			return false;
	}//정원 찼는지
	bool WaitTime()
	{
		if (GetMin() % Rmin == 0)
			return true;
		else
			return false;
	}
	bool HeightCheck()
	{
		if (GetHeight() >= height)
			return true;
		else
			return false;

	}//키 체크
	bool WithParents()
	{
		if (GetWPC() == 1)
		{
			height -= 10;
			return true;
		}
		else
			return false;

	}//부모님과 함께왔는지
};

#endif