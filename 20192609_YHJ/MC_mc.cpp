#include <iostream>
#include "Mc.h"
using namespace std;

McDonald::McDonald() : total(0)
{
	cout << "현금이 맞으면 1, 아니면 0을 입력하세요: ";
	cin >> cash;
}

void McDonald::BuyBurger(const char* name, int n) 
{
	Burger burger(name, n);
	total += burger.SaleBurger();
	burger.ShowData();
}

void McDonald::BuyFries(int n) 
{
	Fries fries(n);
	total += fries.SaleFries();
	fries.ShowData();
}

void McDonald::BuyDrink(int n) 
{
	Drink drink(n);
	total += drink.SaleDrink();
	drink.ShowData();
}

void McDonald::BuyIcecream(int n) 
{
	Icecream icecream(n);
	total += icecream.SaleIcecream();
	icecream.ShowData();
}

void McDonald::BuySet(const char* name) 
{
	Set set(name);
	total += set.SaleSet();
	cout << name;
	set.ShowData();
}

void McDonald::ShowData() 
{
	if (cash)
		cout << "현금으로 총 " << total << "원입니다." << endl;
	else
		cout << "카드로 총 " << total << "원입니다." << endl;
}
