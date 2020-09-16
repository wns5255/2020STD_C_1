#pragma once
#include <iostream>
#include <cstring>
#include "Ride.h"
using namespace std;

class Person {
private:
	int total;
	int count;  // 이용한 놀이기구 개수
	char *name;  // 대표자 이름
	int n;  // 인원
	int tall[20];
	bool pass;//키제한에 걸리는지 않걸리는지 판단하는 변수
	static int people;
public:
	Person(const char* _name, int num = 1) : total(0), count(0), pass(1)//const사용,포인터
	{
		int len = strlen(_name) + 1;
		name = new char[len];
		strcpy(name, _name);
		this->n = num;
		people += n;
		cout << "환영합니다~" << endl;
		cout << "결제는 놀이기구 탑승후 한번에 계산하시면됩니다." << endl;
		cout << "인원 수 만큼 키를 적어 주십시요" << endl;
		for (int k = 0; k < n; k++)
		{
			cin >> tall[k];
		}
		cout << "즐거운 시간 보내세요" << endl;
	}
	explicit Person(const Person& p) : n(p.n), total(p.total), count(p.count), pass(p.pass)
	{
		name = new char[strlen(p.name) + 1];  // 깊은 복사
		strcpy(this->name, p.name);

	}
	~Person() {
		delete[] name;
	}

	void RideViking(Viking& v) {   //call by reference사용
		cout << name << "님, ";
		if (v.GetSeat() <= 0) {
			v.SetSeat(20);
			cout << "놀이기구가 만석입니다. 대기시간 " << v.GetTime() << "분입니다." << endl;
		}
		else {
			v.SetSeat(this->n);  //this포인터 사용
			if (v.GetSeat() < 0)
				cout << "놀이기구 수용 인원 초과입니다." << n + v.GetSeat() << "명만 탑승 가능합니다." << endl;
			else
			{
				for (int k = 0; k < n; k++)
				{
					if (tall[k] < v.talllimit())
					{
						pass = false;
					}
				}
				if (pass == true)
				{
					cout << "인원 " << n << "명 바이킹 탑승하셨습니다." << endl;
					total += (v.GetCost()) * this->n;
					count++;
				}
				else if (pass == false)
				{
					cout << "이용하실 손님중에 키 제한에 걸리는 손님이 계십니다 다른 놀이기구를 이용하여 주십시오" << endl;
				}
			}
		}
	}

	void RideBumper(BumperCar& b) {
		cout << name << "님, ";
		if (b.GetSeat() <= 0) {
			b.SetSeat(20);
			cout << "놀이기구가 만석입니다. 대기시간 " << b.GetTime() << "분입니다." << endl;
		}
		else {
			b.SetSeat(this->n);  //this포인터 사용
			if (b.GetSeat() < 0)
			{
				cout << "놀이기구 수용 인원 초과입니다." << n + b.GetSeat() << "명만 탑승 가능합니다." << endl;
			}
			else
			{
				for (int k = 0; k < n; k++)
				{
					if (tall[k] < b.talllimit())
					{
						pass = false;
					}
				}
				if (pass == true)
				{
					cout << "인원 " << n << "명 범퍼카 탑승하셨습니다." << endl;
					total += (b.GetCost()) * this->n;
					count++;
				}
				else if (pass == false)
				{
					cout << "이용하실 손님중에 키 제한에 걸리는 손님이 계십니다 다른 놀이기구를 이용하여 주십시오" << endl;
				}
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
			t.SetSeat(this->n);  //this포인터 사용
			if (t.GetSeat() < 0)
				cout << "놀이기구 수용 인원 초과입니다." << n + t.GetSeat() << "명만 탑승 가능합니다." << endl;
			else
			{
				for (int k = 0; k < n; k++)
				{
					if (tall[k] < t.talllimit())
					{
						pass = false;
					}
				}
				if (pass == true)
				{
					cout << "인원 " << n << "명 티 익스프레스 탑승하셨습니다." << endl;
					total += (t.GetCost()) * this->n;
					count++;
				}
				else if (pass == false)
				{
					cout << "이용하실 손님중에 키 제한에 걸리는 손님이 계십니다 다른 놀이기구를 이용하여 주십시오" << endl;
				}
			}
		}
	}
	void RideHurricane(Hurricane& h) {
		cout << name << "님, ";
		if (h.GetSeat() <= 0) {
			h.SetSeat(20);
			cout << "놀이기구가 만석입니다. 대기시간 " << h.GetTime() << "분입니다." << endl;
		}
		else {
			h.SetSeat(this->n);  //this포인터 사용
			if (h.GetSeat() < 0)
				cout << "놀이기구 수용 인원 초과입니다." << n + h.GetSeat() << "명만 탑승 가능합니다." << endl;
			else
			{
				for (int k = 0; k < n; k++)
				{
					if (tall[k] < h.talllimit())
					{
						pass = false;
					}
				}
				if (pass == true)
				{
					cout << "인원 " << n << "명 허리케인 탑승하셨습니다." << endl;
					total += (h.GetCost()) * this->n;
					count++;
				}
				else if (pass == false)
				{
					cout << "이용하실 손님중에 키 제한에 걸리는 손님이 계십니다 다른 놀이기구를 이용하여 주십시오" << endl;
				}
			}
		}
	}
	void RideAmazon(Amazon& a) {
		cout << name << "님, ";
		if (a.GetSeat() <= 0) {
			a.SetSeat(20);
			cout << "놀이기구가 만석입니다. 대기시간 " << a.GetTime() << "분입니다." << endl;
		}
		else {
			a.SetSeat(this->n);  //this포인터 사용
			if (a.GetSeat() < 0)
				cout << "놀이기구 수용 인원 초과입니다." << n + a.GetSeat() << "명만 탑승 가능합니다." << endl;
			else
			{
				for (int k = 0; k < n; k++)
				{
					if (tall[k] < a.talllimit())
					{
						pass = false;
					}
				}
				if (pass == true)
				{
					cout << "인원 " << n << "명 아마존 익스프레스 탑승하셨습니다." << endl;
					total += (a.GetCost()) * this->n;
					count++;
				}
				else if (pass == false)
				{
					cout << "이용하실 손님중에 키 제한에 걸리는 손님이 계십니다 다른 놀이기구를 이용하여 주십시오" << endl;
				}
			}
		}
	}
	void ShowData(void) const
	{
		cout << name << "님, ";
		cout << "총 " << count << "개의 놀이기구를 이용하셨습니다." << endl;
		cout << "결제 금액은 " << total << "원입니다." << endl;
	}
	void EverlandData(void) const
	{
		cout << endl;
		cout << "오늘 현재까지 에버랜드를 이용한 고객의 수는 " << people << "명입니다." << endl << endl;
		people = 0;
	}

};
int Person::people = 0;
