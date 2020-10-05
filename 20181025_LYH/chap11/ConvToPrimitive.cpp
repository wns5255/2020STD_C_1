#include <iostream>
using namespace std;

class Number
{
private:
	int num;
public:
	Number(int n = 0) : num(n)
	{
		cout << "Number(int n=0)" << endl;
	}
	Number& operator=(const Number& ref)
	{
		cout << "operator=()" << endl;
		num = ref.num;
		return *this;
	}
	// 형 변환 연산자 오버로딩 = int형으로 형 변환해야하는 상황에서 호출되는 함수
	operator int()
	{
		return num;
	}
	void ShowNumber() { cout << num << endl; }
};

int main(void)
{
	Number num1;
	num1 = 30;
	Number num2 = num1 + 20 ;
	num2.ShowNumber();
	return 0;
}

/*
형 변환 연산자는 반환형을 명시X. but return문에 의한 값의 반환o.
*/