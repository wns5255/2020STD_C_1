#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Character
{
private:
	char* name;
	int hp;  // 체력
	int cp;  // 공격력
protected:
	int ultimate;  // 궁극기
public:
	Character(const char* c_name, int h, int c) : hp(h), cp(c), ultimate(0)
	{
		name = new char[strlen(c_name) + 1];
		strcpy(name, c_name);
	}
	virtual int Get_ultimate(void)
	{
		return ultimate;
	}
	virtual int Get_hp(void)
	{
		return hp;
	}
	virtual bool Check_hp(void)
	{
		if (hp <= 0)
			return 0;
		else
			return 1;
	}
	virtual void Attack(Character& c)
	{
		cout << "[" << name << "] -> ";
		c.Hurt(cp);
		ultimate += 20;
	}
	virtual void Hurt(int n)
	{
		hp -= n;
		if (hp <= 0)
			cout << "[" << name << "] KILL!" << endl;
		else
			cout << "[" << name << "]" << endl;
	}
	virtual void Heal(Character& c)
	{
		c.Recovery(cp);
	}
	virtual void Recovery(int n)
	{
		hp += n;
		ultimate += 10;
	}
	virtual void Buff(int n)
	{
		cp += n;
	}
	virtual void Ultimate(Character& team) = 0; // 순수 가상 함수
};

class Diva : public Character
{
public:
	Diva() : Character("DIVA", 300, 50)
	{
		cout << "DIVA 선택" << endl << "게임을 하면 이겨야지!" << endl;
	}
	virtual void Ultimate(Character& enemy)  // 함수 오버라이딩
	{
		cout << "[DIVA] 이것도 너프해보시지! -> ";
		enemy.Hurt(200);
		ultimate = 0;
	}
};

class Orisa : public Character
{
public:
	Orisa() : Character("ORISA", 300, 50)
	{
		cout << "ORISA 선택" << endl << "여러분의 안전이야말로 제 의무입니다." << endl;
	}
	virtual void Ultimate(Character& enemy)
	{
		cout << "[ORISA] 저항을 멈추십시오! -> ";
		enemy.Hurt(200);
		ultimate = 0;
	}
};

class Genji : public Character
{
public:
	Genji() : Character("GENJI", 150, 80)
	{
		cout << "GENJI 선택" << endl << "겐지가 함께 한다." << endl;
	}
	virtual void Ultimate(Character& enemy)
	{
		cout << "[GENJI] 용이 내가 된다! -> ";
		enemy.Hurt(300);
		ultimate = 0;
	}
};

class Tracer : public Character
{
public:
	Tracer() : Character("TRACER", 120, 60)
	{
		cout << "TRACER 선택" << endl << "안녕 친구들? 해결사가 왔어!" << endl;
	}
	virtual void Ultimate(Character& enemy)
	{
		cout << "[TRACER] 폭탄 고정! -> ";
		enemy.Hurt(250);
		ultimate = 0;
	}
};

class Ana : public Character
{
public:
	Ana() : Character("ANA", 150, 50)
	{
		cout << "ANA 선택" << endl << "신념을 위한 싸움을 멈추지 마라." << endl;
	}
	virtual void Ultimate(Character& team)
	{
		cout << "[ANA] 넌 강해졌다, 돌격해!" << endl;
		team.Buff(50);
		ultimate = 0;
	}
};

class Mercy : public Character
{
public:
	Mercy() : Character("MERCY", 150, 40)
	{
		cout << "MERCY 선택" << endl << "제가 여러분을 돌보겠어요. " << endl;
	}
	virtual void Ultimate(Character& team)
	{
		cout << "[MERCY] 영웅은 죽지 않아요!" << endl;
		team.Recovery(100);
		ultimate = 0;
	}
};

class AI : public Character
{
public:
	AI(const char* name) : Character(name, 200, 50)
	{}
	virtual void Ultimate(Character& enemy)
	{
		cout << "인간 시대의 끝이 도래했다" << endl;
		enemy.Hurt(100);
		ultimate = 0;
	}
};