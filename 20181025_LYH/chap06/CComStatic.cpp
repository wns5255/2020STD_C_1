#include <iostream>
using namespace std;

void Counter()
{
	static int cnt;
	cnt++;
	cout << "Current cnt: " << cnt << endl;
}

int main(void)
{
	for (int i = 0; i < 10; i++)
		Counter();

	return 0;
}

/*
static 변수는 전역변수와 마찬가지로 초기화하지 않으면 0으로 초기화 된다.

메모리 공간은 딱 한번만 할당되고, 프로그램이 종료될때까지 소멸되지 않는다!
*/