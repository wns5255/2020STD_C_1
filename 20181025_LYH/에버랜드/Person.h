#pragma once
#include <iostream>
#include "Ride.h"
using namespace std;

class Person {
private:
	int total;  // 총 금액
	int count;  // 이용한 놀이기구 개수
	char name[10];  // 대표자 이름
	int n;  // 인원
public:
	Person(const char* _name, int num) : n(num), total(0), count(0)
	{
		strcpy_s(name, _name);
	}

	void RideViking(Viking& v) {
		cout << name << "님, ";
		if (v.GetSeat() <= 0) {
			v.SetSeat(20);
			cout << "놀이기구가 만석입니다. 대기시간 " << v.GetTime() << "분입니다." << endl;
		}
		else {
			v.SetSeat(n);
			if (v.GetSeat() < 0)
				cout << "놀이기구 수용 인원 초과입니다." << n + v.GetSeat() << "명만 탑승 가능합니다." << endl;
			else 
			{
				cout << "인원 " << n << "명 바이킹 탑승하셨습니다." << endl;
				total += (v.GetCost()) * n;
				count++;
			}
		}
	}
	void RideBumper(BumperCar& b) {
		cout << name << "님, ";
		if (b.GetSeat() <= 0) {
			b.SetSeat(5);
			cout << "놀이기구가 만석입니다. 대기시간 " << b.GetTime() << "분입니다." << endl;
		}
		else {
			b.SetSeat(n);
			if (b.GetSeat() < 0)
				cout << "놀이기구 수용 인원 초과입니다." << n + b.GetSeat() << "명만 탑승 가능합니다." << endl;
			else {
				cout << "인원 " << n << "명 범퍼카 탑승하셨습니다." << endl;
				total += (b.GetCost()) * n;
				count++;
			}
		}
	}
	void RideT(T& t) {
		cout << name << "님, ";
		if (t.GetSeat() <= 0) {
			t.SetSeat(20);
			cout << "놀이기구가 만석입니다. 대기시간 " << t.GetTime() << "분입니다." << endl;
		}
		else {
			t.SetSeat(n);
			if (t.GetSeat() < 0)
				cout << "놀이기구 수용 인원 초과입니다." << n + t.GetSeat() << "명만 탑승 가능합니다." << endl;
			else {
				cout << "인원 " << n << "명 티 익스프레스 탑승하셨습니다." << endl;
				total += (t.GetCost()) * n;
				count++;
			}
		}
	}
	void RideHurricane(Hurricane& h) {
		cout << name << "님, ";
		if (h.GetSeat() <= 0) {
			h.SetSeat(6);
			cout << "놀이기구가 만석입니다. 대기시간 " << h.GetTime() << "분입니다." << endl;
		}
		else {
			h.SetSeat(n);
			if (h.GetSeat() < 0)
				cout << "놀이기구 수용 인원 초과입니다." << n + h.GetSeat() << "명만 탑승 가능합니다." << endl;
			else {
				cout << "인원 " << n << "명 허리케인 탑승하셨습니다." << endl;
				total += (h.GetCost()) * n;
				count++;
			}
		}
	}
	void RideAmazon(Amazon& a) {
		cout << name << "님, ";
		if (a.GetSeat() <= 0) {
			a.SetSeat(8);
			cout << "놀이기구가 만석입니다. 대기시간 " << a.GetTime() << "분입니다." << endl;
		}
		else {
			a.SetSeat(n);
			if (a.GetSeat() < 0)
				cout << "놀이기구 수용 인원 초과입니다." << n + a.GetSeat() << "명만 탑승 가능합니다." << endl;
			else {
				cout << "인원 " << n << "명 아마존 익스프레스 탑승하셨습니다." << endl;
				total += (a.GetCost()) * n;
				count++;
			}
		}
	}
	void ShowData(void)
	{
		cout << name << "님, ";
		cout << "총 " << count << "개의 놀이기구를 이용하셨습니다." << endl;
		cout << "결제 금액은 " << total << "원입니다." << endl;
	}
};
