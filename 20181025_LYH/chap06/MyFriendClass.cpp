// friend 선언
#include <iostream>
#include <cstring>
using namespace std;

class Girl;  // Girl이 클래스 이름이라는 것을 알림. 없어도 컴파일 가능.

class Boy {
private:
	int height;
	friend class Girl;  // Girl클래스를 friend로 선언 + Girl 클래스 선언
public:
	Boy(int len) : height(len)
	{}
	void ShowYourFriendInfo(Girl& frn);
};

class Girl {
private:
	char phNum[20];
public:
	Girl(const char* num)
	{
		strcpy_s(phNum, num);
	}
	void ShowYourFriendInfo(Boy& frn);
	friend class Boy;  // Boy클래스를 friend로 선언
};

// 컴파일러가 이 함수를 제대로 실행하기 위해서는 Girl클래스에 phNum이 존재한다는 것을 확인해야한다.
// 따라서 정의를 Girl클래스 밑에 한 것.
void Boy::ShowYourFriendInfo(Girl& frn)
{
	cout << "Her phone number: " << frn.phNum << endl;
}

void Girl::ShowYourFriendInfo(Boy& frn)
{
	cout << "His height: " << frn.height << endl;
}

int main(void) {
	Boy boy(170);
	Girl girl("010-1234-5678");
	boy.ShowYourFriendInfo(girl);
	girl.ShowYourFriendInfo(boy);
	return 0;
}

/*
friend 선언은 그 클래스의 private 멤버 접근을 가능하게 해준다.

private영역이든 public 영역이든 아무데서나 선언 가능.

friend 선언의 지나친 사용은 매우 위험. 보안성DOWN!
*/