#include <iostream>
#include <cstring>
#include "Menu.h"
using namespace std;

// 버거 클래스 멤버변수 초기화
Burger::Burger(const char* name, int n) 
{
	strcpy_s(BurgerName, name);
	num = n;
	BurgerPrice = 4000;
}

// 버거 판매 기능
int Burger::SaleBurger() 
{
	int cost = num * BurgerPrice;
	return cost;
}

// 버거 주문 출력
void Burger::ShowData() const
{
	cout << BurgerName << "버거 " << num << "개를 주문하셨습니다." << endl;
}

// 감자튀김
Fries::Fries(int n) 
{
	num = n;
	FriesPrice = 2000;
}
int Fries::SaleFries() 
{
	int cost = num * FriesPrice;
	return cost;
}
void Fries::ShowData() const 
{
	cout << "감자튀김 " << num << "개를 시키셨습니다." << endl;
}

// 음료
Drink::Drink(int n) 
{
	num = n;
	DrinkPrice = 1000;
}
int Drink::SaleDrink() 
{
	int cost = num * DrinkPrice;
	return cost;
}
void Drink::ShowData() const 
{
	cout << "음료 " << num << "개를 시키셨습니다." << endl;
}

// 아이스크림
Icecream::Icecream(int n) 
{
	num = n;
	IcecreamPrice = 1500;
}
int Icecream::SaleIcecream() 
{
	int cost = num * IcecreamPrice;
	return cost;
}
void Icecream::ShowData() const 
{
	cout << "아이스크림 " << num << "개를 시키셨습니다." << endl;
}

// 세트
Set::Set(const char* name) : b(name, 1), f(1), d(1)
{ }
int Set::SaleSet() 
{
	int cost = b.SaleBurger() + f.SaleFries() + d.SaleDrink() - 1000;
	return cost;
}
void Set::ShowData() 
{
	cout << "버거 세트를 주문하셨습니다." << endl;
}
