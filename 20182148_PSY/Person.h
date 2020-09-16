#ifndef _PERSON_H_
#define _PERSON_H_
#include "Menu.h"
#include "Ticket.h"
#include<iostream>
using namespace std;


class Person : public Ticket
{
private:
    friend class Ride;
    int Pcost;
    int num, age, height, money, min, WPC;
    char* menu; // Menu로 보낼 메뉴 이름 값
    int num2, EatPrice;   // Menu로 보낼 메뉴 개수 값, 식비
    char type[100];
public:
    Person() :Ticket(14,1), money(10000), num(1), min(10), age(14), height(150), WPC(1)
    {
        Pcost = CostReturn();
    };
    Person(int myMoney, int m, int myAge, int h, int wpc) : Ticket(myAge, num), money(myMoney), num(1), min(m), age(myAge), height(h), WPC(wpc)
    {
        Pcost = CostReturn();
    }
    // 음식점 , 디폴트
    Person(int myMoney, int m, int myAge, int h) :Ticket(myAge, num), money(myMoney), num(1), min(m), age(myAge), height(h), WPC(0)
    {
        Pcost = CostReturn();
    }

    int GetMoney() { return money; }
    int GetMin() { return min; }
    int GetAge() { return age; }
    int GetHeight() { return height; }
    int GetWPC() { return WPC; }
    void TAKE();
    void PAY();
    void ChoiceMenu(Menu& eat, char* WantMenu, int n2);

};


#endif;