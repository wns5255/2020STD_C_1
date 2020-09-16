// 이름공간 std에 선언된 모든 것에 대해 이름공간 지정의 생략을 명령할 수 있음을 보여주는 예제 (p.47)

#include <iostream>
using namespace std;

int main(void)
{
	int num = 20;
	cout << "Hello World!" << endl;
	cout << "Hello " << "World!" << endl;
	cout << num << ' ' << 'A';
	cout << ' ' << 3.14 << endl;
	return 0;
}
