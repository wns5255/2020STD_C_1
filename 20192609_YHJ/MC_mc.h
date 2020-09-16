#pragma once
#include <iostream>
#include "Menu.h"
using namespace std;

// 주문 클래스
class McDonald {
private:
	int total;  // 총 결제값
	bool cash; // 현금or카드
public:
	McDonald();
	void BuyBurger(const char* name, int n);
	void BuyFries(int n);
	void BuyDrink(int n);
	void BuyIcecream(int n);
	void BuySet(const char* name);
	void ShowData();

};
