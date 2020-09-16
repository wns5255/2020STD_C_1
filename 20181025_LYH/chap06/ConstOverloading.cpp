#include <iostream>
using namespace std;

class SoSimple {
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{}
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	void SimpleFunc()
	{
		cout << "SimpleFunc: " << num << endl;
	}
	void SimpleFunc() const
	{
		cout << "const SimpleFunc: " << num << endl;
	}

};

void YourFunc(const SoSimple& obj)  
{
	obj.SimpleFunc();  // obj가 const참조자이기 때문에 const함수 호출
}

int main(void)
{
	SoSimple obj1(2);
	const SoSimple obj2(7);

	obj1.SimpleFunc();  // 15행의 일반 멤버함수 호출
	obj2.SimpleFunc();  // 19행의 const 멤버함수 호출

	YourFunc(obj1);
	YourFunc(obj2);
	return 0;
}

/*
const선언 유무도 함수 오버로딩 조건에 포함이 된다.

오버로딩 된 const함수는 const객체에서 함수를 호출할 때 호출이 된다.
*/