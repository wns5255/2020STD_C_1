#ifndef __PERSON_H__
#define __PERSON_H__
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
	char* name;            //이름
	int n;                 //인원    
	int total;			   //총 결제금액     
	int count;				//총 탄 놀이기구 개수
	int height[20];         //키 제한

public:
	Person(const char* _name, int _n) :n(_n) {
		int names = strlen(_name) + 1;
		name = new char[names];
		strcpy(name, _name);
		cout << "키: " << endl;
		for (int i = 0; i < n; i++) {
			cin >> height[i];
		}
	}

	char* GetName() {
		return name;
	}
	int GetNum() {
		return n;
	}
	int* GetHeight() {
		return height;
	}
	void AddTotal(int _total) {
		total += _total * n;
	}
	void AddCount() 
	{
		count++;
	}
	void ShowData() 
	{
		cout << "\n";
		cout << name << "님 총 " << count << "개의 놀이기구를 이용하셨으며 지불 금액은 " << total << "원입니다." << endl;
	}

};


#endif