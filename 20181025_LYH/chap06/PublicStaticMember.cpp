#include <iostream>
using namespace std;

class SoSimple
{
public:
	static int simObjCnt;

	SoSimple()
	{
		simObjCnt++;
	}
};
int SoSimple::simObjCnt = 0;

int main(void)
{
	cout << SoSimple::simObjCnt << "번째 SoSimple 객체";
	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjCnt << "번째 SoSimple 객체";
	// cout << sim1.simObjCnt << "번째 SoSimple 객체";
	// cout << sim2.simObjCnt << "번째 SoSimple 객체";
	//  ==> 멤버변수 접근으로 오해를 일으킬 수 있음
	// static 멤버변수는 클래스 이름을 통해 접근하는 것이 좋다!

	return 0;
}