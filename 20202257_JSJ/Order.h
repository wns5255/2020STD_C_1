#pragma once
#include "Menu.h"
#include <iostream>
using namespace std;

class Order {
private:
	Menu* menuList[50];
	int num;
public:
	Order() :num(0) {}
	void SelMenu(Menu*& menu) {
		menuList[num] = menu;
		num++;
	}
	void Bill() const {
		for (int i = 0; i < num; i++) {
			cout << menuList[i]->GetMenu() << endl;
			cout << menuList[i]->GetPrice() << "원" << endl << endl;
		}
	}
	void Pay_Card() const {
		cout << "---카드 결제---" << endl;
		this->Bill();
	}
	void Pay_Cash() const {
		cout << "---현금 결제---" << endl;
		this->Bill();
	}
};