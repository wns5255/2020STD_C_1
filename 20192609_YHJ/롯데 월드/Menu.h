#pragma once
#ifndef __MENU_H_
#define __MENU_H_
#define _CRT_SECURE_NO_WARNINGS
#include "Menu.h"
using namespace std;

class Menu
{
private:
	char* WhatMenu;	// 메뉴 이름
	int cost;		// 해당 메뉴 가격
	int result;		// 총 가격


public:
	Menu();			// 생성자	
	~Menu();		// 소멸자

	void ShowMenu(void);
	int Calculate(const char* MenuName, int num); // 메뉴 이름을 받아서 해당 메뉴의 가격으로 변환
	void ShowOfferResult(void);			// 구매 결과 출력

};

#endif
