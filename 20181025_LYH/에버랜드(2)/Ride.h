#pragma once
#include <iostream>
using namespace std;

class Viking {
private:
	int time;  // 탑승시간
	int cost;  // 이용요금
	mutable int seat;  // 잔여석
	int limit;
public:
	Viking() : limit(150), time(5), cost(2000), seat(20)
	{ }
	int GetCost(void) {
		return cost;
	}
	int GetTime(void) {
		return time;
	}
	int GetSeat(void) {
		return seat;
	}
	int talllimit(void)
	{
		return limit;
	}
	void SetSeat(int n) const {
		if (n == 20)
			seat = 20;
		else
			seat -= n;
	}
};

class BumperCar {
private:
	int time;
	int cost;
	mutable int seat;
	int limit;
public:
	BumperCar() : limit(160), time(3), cost(1000), seat(5)
	{ }
	int GetCost(void) {
		return cost;
	}
	int GetTime(void) {
		return time;
	}
	int GetSeat(void) {
		return seat;
	}
	int talllimit(void)
	{
		return limit;
	}
	void SetSeat(int n) const {
		if (n == 5)
			seat = 5;
		else
			seat -= n;
	}
};

class T {
private:
	int time;
	int cost;
	mutable int seat;
	int limit;
public:
	T() : limit(150), time(5), cost(3000), seat(20)
	{ }
	int GetCost(void) {
		return cost;
	}
	int GetTime(void) {
		return time;
	}
	int GetSeat(void) {
		return seat;
	}
	int talllimit(void)
	{
		return limit;
	}
	void SetSeat(int n) const {
		if (n == 20)
			seat = 20;
		else
			seat -= n;
	}
};

class Hurricane {
private:
	int time;
	int cost;
	mutable int seat;
	int limit;
public:
	Hurricane() : limit(140), time(2), cost(2000), seat(6)
	{ }
	int GetCost(void) {
		return cost;
	}
	int GetTime(void) {
		return time;
	}
	int GetSeat(void) {
		return seat;
	}
	int talllimit(void)
	{
		return limit;
	}
	void SetSeat(int n) const {
		if (n == 6)
			seat = 6;
		else
			seat -= n;
	}
};

class Amazon {
private:
	int time;
	int cost;
	mutable int seat;
	int limit;
public:
	Amazon() : limit(130), time(4), cost(2500), seat(8)
	{ }
	int GetCost(void) {
		return cost;
	}
	int GetTime(void) {
		return time;
	}
	int GetSeat(void) {
		return seat;
	}
	int talllimit(void)
	{
		return limit;
	}
	void SetSeat(int n) const {
		if (n == 8)
			seat = 8;
		else
			seat -= n;
	}
};
