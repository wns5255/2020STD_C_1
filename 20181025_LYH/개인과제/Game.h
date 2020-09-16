#pragma once
#include <iostream>
#include "Character.h"
using namespace std;


class Game
{
private:
	int round;
	int point_gauge;
	AI* ai;  // 인공지능 , 객체 포인터
	int cNum;
public:
	Game(): round(1), point_gauge(0), cNum(0)
	{}
	void Create_AI()
	{
		ai = new AI("AI");
	}
	
	// 공격
	void Fight(Character& c)
	{
		if (c.Check_hp())
		{
			if (c.Get_ultimate() >= 100)
			{
				cout << "궁극기를 사용합니다." << endl;
				c.Ultimate(*ai); // 한방 컷
				point_gauge += 30;
			}
			else
			{
				c.Attack(*ai);
				point_gauge += 10;
			}
		}
		else
			cout << "캐릭터가 사망하여 사용할 수 없습니다." << endl;
		if (ai->Get_hp() <= 0)
		{
			delete ai;
			Create_AI();
		}
	}

	// 공격받음
	void Suffer(Character& c)
	{
		if (c.Check_hp())
		{
			if (c.Get_ultimate() >= 100)
			{
				cout << "궁극기를 사용합니다." << endl;
				ai->Ultimate(c);
			}
			else
				ai->Attack(c);
		}
		else
			cout << "캐릭터가 사망하여 사용할 수 없습니다." << endl;
	}

	// 지원가
	void Support(Character& c1, Character& c2)
	{
		if (c1.Check_hp())
		{
			if (c1.Get_ultimate() >= 100)
			{
				cout << "궁극기를 사용합니다." << endl;
				c1.Ultimate(c2);
				point_gauge += 30;
			}
			else
			{
				c1.Heal(c2);
				point_gauge += 10;
			}
		}
		else
			cout << "캐릭터가 사망하여 사용할 수 없습니다." << endl;
	}

	void ShowData(void)
	{
		if (round < 4)
		{
			if (point_gauge < 100)
			{
				cout << "현재 거점 게이지는 " << point_gauge << "%입니다." << endl << "다음 라운드를 진행합니다." << endl;
				round++;
			}
			else if (point_gauge >= 100)
				cout << "거점 점령 성공! 승리하셨습니다." << endl;
		}
		else
			cout << "거점 정령 실패.. 패배하였습니다." << endl;
		
	}
};
