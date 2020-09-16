#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Menu { // 추상 클래스
private:
	char* menu;
public:
	Menu(const char* _menu) {
		menu = new char[strlen(_menu) + 1];
		strcpy(this->menu, _menu);
	}
	virtual int GetPrice() const = 0; // 순수 가상 함수
	virtual void UpSet() = 0;
	char* GetMenu() const {
		return menu;
	}
};

class Burger : public Menu {
private:
	int price;
public:
	Burger(const char* menu, int price_) :Menu(menu), price(price_) {}

	virtual int GetPrice() const {
		return price;
	}
	virtual void UpSet() {
		price += 2000;
	}
};

class Chicken : public Menu {
private:
	int price;
public:
	Chicken(const char* menu, int price_) :Menu(menu), price(price_) {}

	virtual int GetPrice() const {
		return price;
	}
	virtual void UpSet() {
		price += 1000;
	}
};