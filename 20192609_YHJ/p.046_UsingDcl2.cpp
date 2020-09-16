// 프로그램 전체영역에 효력을 미치게 함을 보이는 예제 (p.46)

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
	int num = 20;
	cout << "Hello World!" << endl;
	cout << "Hello " << "World!" << endl;
	cout << num << ' ' << 'A';
	cout << ' ' << 3.14 << endl;
	return 0;
}
