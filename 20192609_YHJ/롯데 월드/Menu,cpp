#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Menu.h"
using namespace std;

void Menu::ShowMenu(void)
{
	cout << " --------- MENU --------- " << "\n";
	cout << "|   OksusuButter	3000  |" << "\n";
	cout << "|   JjamBbong		8000  |" << "\n";
	cout << "|   GongCha		5000  |" << "\n";
	cout << "|   HotDogSet		6000  |" << "\n";
	cout << "|   KolPop			4500  |" << "\n";
	cout << " ------------------------ " << "\n";
}

Menu::Menu()			// 생성자
{
	WhatMenu = NULL;
	cost = 0;
	result = 0;
	cout << "주문하시려면 입력해주세요." << endl;
}

Menu::~Menu()			// 소멸자
{
	delete[]WhatMenu;
	cout << "주문이 접수되었습니다." << endl;
}

int Menu::Calculate(const char* MenuName, int num) // 메뉴 이름을 받아서 해당 메뉴의 가격으로 변환
{
	int len = strlen(MenuName) + 1;
	WhatMenu = new char[len];
	strcpy(WhatMenu, MenuName);

	if (WhatMenu == "OksusuButter")
		cost = 3000;
	if (WhatMenu == "JjamBbong")
		cost = 8000;
	if (WhatMenu == "GongCha")
		cost = 5000;
	if (WhatMenu == "HotDogSet")
		cost = 6000;
	if (WhatMenu == "KolPop")
		cost = 4500;

	result = cost * num;

	return result;
}

void Menu::ShowOfferResult(void)		// 구매 결과 출력
{
	cout << "총 결제금액은 " << result << "원 입니다." << endl;
}
