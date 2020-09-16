//  유도 클래스의 객체 생성과정
//  ==> 생성자 2번 호출 ( 기초클래스 생성자 -> 유도클래스 생성자 )

#include <iostream>
using namespace std;

class SoBase
{
private:
	int baseNum;
public:
	SoBase() : baseNum(20)
	{
		cout << "SoBase()" << endl;
	}
	SoBase(int n) : baseNum(n)
	{
		cout << "SoBase(int n)" << endl;
	}
	void ShowBaseData(void)
	{
		cout << baseNum << endl;
	}
};

class SoDerived : public SoBase
{
private:
	int derivNum;
public:
	SoDerived() : derivNum(30)
	{
		cout << "SoDerived()" << endl;
	}
	SoDerived(int n) : derivNum(n)
	{
		cout << "SoDerived(int n)" << endl;
	}
	SoDerived(int n1, int n2) : SoBase(n1), derivNum(n2)
	{
		cout << "SoDerived(int n1, int n2)" << endl;
	}
	void ShowDerivData(void)
	{
		ShowBaseData();
		cout << derivNum << endl;
	}
};

int main(void) {
	cout << "case1....." << endl;
	SoDerived dr1;
	dr1.ShowDerivData();
	cout << "----------------------------------" << endl;
	cout << "case2....." << endl;
	SoDerived dr2(12);
	dr2.ShowDerivData();
	cout << "----------------------------------" << endl;
	cout << "case3....." << endl;
	SoDerived dr3(23, 24);
	dr3.ShowDerivData();

	return 0;
}

/*
유도클래스의 객체 생성과정에서 기초 클래스의 생성자는 100% 호출된다.
유도 클래스에서 기초 클래스의 생성자 호출 명시하지 않으면, 기초 클래스의 void 생성자가 호출된다.
*/