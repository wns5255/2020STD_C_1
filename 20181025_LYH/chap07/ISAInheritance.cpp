#include <iostream>
#include <cstring>
using namespace std;

class Computer 
{
private:
	char owner[50];
public:
	Computer(const char* name) {
		strcpy(owner, name);
	}
	void Calculate(void)
	{
		cout << "요청 내용을 계산합니다." << endl;
	}
};

class Notebook : public Computer
{
private:
	int Battery;
public:
	Notebook(const char* name, int initChag) : Computer(name), Battery(initChag)
	{}
	void Charging(void) { Battery += 5; }
	void UseBattery(void) { Battery -= 1; }
	void MovingCal(void)
	{
		if (GetBatteryInfo() < 1)
		{
			cout << "충전이 필요합니다." << endl;
			return;
		}
		cout << "이동하면서 ";
		Calculate();
		UseBattery();
	}
	int GetBatteryInfo(void) {	return Battery;	}
};

class TabletNotebook : public Notebook
{
private:
	char regstPenModel[50];
public:
	TabletNotebook(const char* name, int initChag, const char* pen) : Notebook(name, initChag)
	{
		strcpy(regstPenModel, pen);
	}
	void Write(const char* penInfo) 
	{
		if (GetBatteryInfo() < 1)
		{
			cout << "충전이 필요합니다." << endl;
			return;  // void형 함수 종료(탈출)
		}
		if (strcmp(regstPenModel, penInfo) != 0)
		{
			cout << "등록된 펜이 아닙니다.";
			return;
		}
		cout << "필기 내용을 처리합니다.";
		UseBattery();
	}
};

int main(void)
{
	Notebook nc("이수종", 5);
	TabletNotebook tn("정수영", 5, "ISE-241-242");
	nc.MovingCal();
	tn.Write("ISE-241-242");
	return 0;
}

/*
strcmp : 문자열 비교 함수
비교하는 두 문자열이 같으면 0을 반환.

상속 관계는 IS-A관계일때 제일 적합하다!
노트북 is a 컴퓨터.
타블렛 is a 노트북. 타블렛 is a 컴퓨터.
*/