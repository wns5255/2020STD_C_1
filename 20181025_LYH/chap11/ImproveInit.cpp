// 이니셜라이저

#include <iostream>
using namespace std;

class AAA
{
private:
	int num;
public:
	AAA(int n = 0) :num(n)
	{
		cout << "AAA(int n=0" << endl;
	}
	AAA(const AAA& ref) :num(ref.num)
	{
		cout << "AAA(const AAA& ref)" << endl;
	}
	AAA& operator=(const AAA& ref)
	{
		num = ref.num;
		cout << "operator=(const AAA& ref)" << endl;
		return *this;
	}
};

class BBB
{
private:
	AAA mem;
public:
	BBB(const AAA& ref) : mem(ref)
	{}
};

class CCC
{
private:
	AAA mem;
public:
	CCC(const AAA& ref)
	{ mem = ref; }
};

int main(void)
{
	AAA obj1(12);
	cout << "****************************" << endl;
	BBB obj2(obj1);
	cout << "****************************" << endl;
	CCC obj3(obj1);

	return 0;
}

/*
이니셜라이저 : 선언과 동시에 초기화가 이루어지는 형태로 바이너리 코드 생성 (한줄)
몸체에서 대입 : 선언과 초기화를 별도의 문장에서 진행.
*/