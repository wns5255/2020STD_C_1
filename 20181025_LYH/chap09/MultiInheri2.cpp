// 다중 상속의 모호성
#include <iostream>
using namespace std;

class BaseOne
{
public:
	void SimpleFunc() { cout << "BaseOne" << endl; }
};

class BaseTwo
{
public:
	void SimpleFunc() { cout << "BaseTwo" << endl; }
};

class MultiDerived : public BaseOne, protected BaseTwo  // 다중상속
{
public:
	void ComplexFunc()
	{
		BaseOne::SimpleFunc();
		BaseTwo::SimpleFunc();
	}
};

int main(void)
{
	MultiDerived mdr;
	mdr.ComplexFunc();
	return 0;
}