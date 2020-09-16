// HAS-A 관계(소유의 관계)도 상속의 조건은 되지만 복합 관계로 이를 대신하는 것이 일반적이다.

#include <iostream>
#include <cstring>
using namespace std;

class Gun
{
private:
	int bullet;  // 총알의 개수
public:
	Gun(int bnum) : bullet(bnum)
	{}
	void Shot(void) {
		cout << "BBANG!" << endl;
		bullet--;
	}
};

class Police : public Gun
{
private:
	int handcuffs;
public:
	Police(int bnum, int bcuff) : Gun(bnum), handcuffs(bcuff)
	{}
	void PutHandcuff(void)
	{
		cout << "SNAP!" << endl;
		handcuffs--;
	}

};

int main(void) {
	Police pman(5, 3);
	pman.Shot();
	pman.PutHandcuff();
	return 0;
}

