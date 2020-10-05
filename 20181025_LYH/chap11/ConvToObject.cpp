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
	num = 30;  // ������ ȣ�� and ���� ������ ȣ��
	/*
	num = Number(30);  -> 1�ܰ� �ӽð�ü ����
	num.operator=(Number(30));  -> 2�ܰ� �ӽð�ü�� ���ڷ� �����ϴ� ���� �������� ȣ��
	*/
	num.ShowNumber();
	return 0;
}
