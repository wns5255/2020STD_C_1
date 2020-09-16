#pragma once
#include <iostream>
using namespace std;

class Burger {
private:
	char BurgerName[20];
	int num; // 파는 개수
	int BurgerPrice; // 버거 가격
public:
	Burger(const char* name, int n);
	int SaleBurger();
	void ShowData() const;
};

class Fries {
private:
	int num;
	int FriesPrice;
public:
	Fries(int n);
	int SaleFries();
	void ShowData() const;
};

class Drink {
private:
	int num;
	int DrinkPrice;
public:
	Drink(int n);
	int SaleDrink();
	void ShowData() const;
};

class Icecream {
private:
	int num;
	int IcecreamPrice;
public:
	Icecream(int n);
	int SaleIcecream();
	void ShowData() const;
};

class Set {
private:
	Burger b;
	Fries f;
	Drink d;
public:
	Set(const char* name);
	int SaleSet();
	void ShowData();
};
