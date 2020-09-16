#ifndef __RIDE_H__
#define __RIDE_H__
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Person.h"
using namespace std;

class Ride
{
private:
	int cost;
	int R_SEAT;  // 좌석 개수
	int seat;  // 잔여석
	int limit;
	char* rides;
public:
	Ride(int _cost, int _R_SEAT, int _limit, const char* _rides) 
		: cost(_cost), R_SEAT(_R_SEAT), seat(_R_SEAT), limit(_limit)
	{
		int len = strlen(_rides) + 1;
		rides = new char[len];
		strcpy(rides, _rides);
	}

	// 키 체크 
	bool H_Check(Person& p) 
	{
		for (int i = 0; i < p.GetNum(); i++) 
		{
			if (p.GetHeight()[i] < limit)
				return 0;
		}
		return 1;
	}

	// 잔여석 확인 -> 탈 수 있는지 -> 인원수 탑승하고 더 받아주기.
	bool S_Check(Person& p)
	{
		if (p.GetNum() <= seat)
			return 1;
		else
			return 0;
	}
	// 놀이기구가 한번 돌아감 (미완성)
	void Start(void)
	{
		cout << rides << " 운행되었습니다." << endl;
		seat = R_SEAT;
	}

	// 탑승 & 가동
	void Riding(Person& p)
	{
		if (S_Check(p) && H_Check(p))
		{
			seat -= p.GetNum();

			p.AddTotal(cost);
			p.AddCount();
			cout << p.GetName() << "님, " << rides << " 탑승하셨습니다." << endl;

			if (seat == 0)
			{
				Start();
				return;
			}
		}
		else
		{
			if (S_Check(p) == 0)
				cout << p.GetName() << "님, 인원수 초과로 탑승하실 수 없습니다." << endl;
			if (H_Check(p) == 0)
				cout << "키 제한에 걸려 탑승하실 수 없습니다." << endl;
		}
	}
};

class Viking : public Ride
{
public:
	Viking() : Ride(5000, 20, 140,"바이킹")
	{}
};

class BumperCar : public Ride
{
public:
	BumperCar() : Ride(2000, 6, 110, "범퍼카")
	{}
};

class T : public Ride
{
public:
	T() : Ride(5000, 20, 150, "티 익스프레스")
	{}
};

class Hurricane : public Ride
{
public:
	Hurricane() : Ride(5000, 6, 130, "허리케인")
	{}
};

class Amazon : public Ride
{
public:
	Amazon() : Ride(5000, 8, 110, "아마존 익스프레스")
	{}
};

#endif