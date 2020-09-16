// mutable
// : const 함수 내에서의 변경을 예외적으로 허용한다는 의미.

#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num1;
	mutable int num2;
public:
	SoSimple(int n1, int n2) : num1(n1), num2(n2)
	{}
	void ShowSimpleData() const
	{
		cout << num1 << ", " << num2 << endl;
	}
	void CopyToNum2() const
	{
		num2 = num1;  // const함수 내에서 num2를 변경.
	}
};

int main(void)
{
	SoSimple sm(1, 2);
	sm.ShowSimpleData();
	sm.CopyToNum2();
	sm.ShowSimpleData();

	return 0;
}

/*
mutable 선언은 const를 의미없게 만들어버리기 때문에 사용을 지양하는 것이 좋다.
*/