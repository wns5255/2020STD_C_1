#pragma once
#ifndef __PERSON_H_
#define __PERSON_H_
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include "Menu.h"
#include "Ride.h"

class Person {
private:
    Ride ride;
    int num, age, height, money, min, WPC;
    char* menu; // Menu로 보낼 메뉴 이름 값
    int num2, EatPrice;   // Menu로 보낼 메뉴 개수 값, 식비
    char type[100];
public:
    Person() { money = 10000, min = 10, num = 1, age = 14, height = 150; }
    Person(int myMoney, int n, int m, int myAge, int h) : money(myMoney), num(n), min(m), age(myAge), height(h) {};   // À½½ÄÁ¡ , µðÆúÆ®
    Person(int myMoney, int n, int m, int myAge) :money(myMoney), num(n), min(m), age(myAge) {};
    void PAY();
    void TAKE();
    void ChoiceMenu(Menu& eat, char* WantMenu, int n2);
};

#endif;
