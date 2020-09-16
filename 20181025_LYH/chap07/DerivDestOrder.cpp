//  소멸자도 두번 호출 ( 생성자와 반대 순서로)

#include <iostream>
using namespace std;

class SoBase
{
private:
	int baseNum;
public:
	SoBase(int n) : baseNum(n)
	{
		cout << "SoBase() : " << baseNum << endl;
	}
	~SoBase()
	{
		cout << "~SoBase() : " << baseNum << endl;
	}
};

class SoDerived : public SoBase
{
private:
	int derivNum;
public:

	SoDerived(int n) : SoBase(n), derivNum(n)
	{
		cout << "SoDerived() : " << derivNum << endl;
	}
	~SoDerived()
	{
		cout << "~SoDerived() : " << derivNum << endl;
	}
};

int main(void) {
	SoDerived drv1(15);
	SoDerived drv2(27);

	return 0;
}

/*
스택에 생성된 객체의 소멸순서 : 생성자와 반대!

생성자에서 동적할당한 메모리 공간은 소멸자에서 해제한다.
*/