#pragma once
#include <iostream>
using namespace std;

class Viking {
private:
	int time;  // 탑승시간
	int cost;  // 이용요금
	mutable int seat;  // 잔여석
public:
	Viking() : time(5), cost(2000), seat(20)
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
public:
	BumperCar() : time(3), cost(1000), seat(5)
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
public:
	T() : time(5), cost(3000), seat(20)
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
public:
	Hurricane() : time(2), cost(2000), seat(6)
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
public:
	Amazon() : time(4), cost(2500), seat(8)
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
	void SetSeat(int n) const {
		if (n == 8)
			seat = 8;
		else
			seat -= n;
	}
};
