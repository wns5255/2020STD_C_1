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
	void ShowNumber() { cout << num << endl; }
};

int main(void)
{
	Number num;
	num = 30;  // 생성자 호출 and 대입 연산자 호출
	/*
	num = Number(30);  -> 1단계 임시객체 생성
	num.operator=(Number(30));  -> 2단계 임시객체를 인자로 전달하는 대입 연산자의 호출
	*/
	num.ShowNumber();
	return 0;
}
