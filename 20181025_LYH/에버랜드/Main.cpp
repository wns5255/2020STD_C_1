#include <iostream>
#include "Person.h"
#include "Ride.h"
using namespace std;

int main(void) {

	// 놀이기구 가동
	Viking v;
	BumperCar b;
	T t;
	Hurricane h;
	Amazon a;

	// 사람 입장
	Person p1("강아지", 2);
	Person p2("고양이", 6);
	Person p3("코끼리", 10);
	Person p4("다람쥐", 4);
	Person p5("개구리", 1);

	// 놀이기구 탑승
	p2.RideViking(v);
	p3.RideViking(v);
	p4.RideViking(v);
	p5.RideViking(v);

	p5.RideAmazon(a);
	p3.RideAmazon(a);
	p2.RideAmazon(a);

	p3.RideT(t);
	p1.RideT(t);
	p4.RideT(t);
	p2.RideT(t);

	p2.RideBumper(b);
	p4.RideBumper(b);

	p2.RideHurricane(h);
	p4.RideHurricane(h);
	p1.RideHurricane(h);

	// 계산하고 퇴장
	p1.ShowData();
	p2.ShowData();
	p3.ShowData();
	p4.ShowData();
	p5.ShowData();

	// 패키지
	Person p1_package(p1);
	p1_package.ShowData();
	Person p2_package(p2);
	p2_package.ShowData();


	return 0;
}