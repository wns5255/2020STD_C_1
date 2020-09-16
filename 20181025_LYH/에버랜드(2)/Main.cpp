#include <iostream>
#include "Person.h"
#include "Ride.h"
using namespace std;

//Person Receipt(Person p) {
//	return p;  // explicit 때문에 오류
//}

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

	p5.EverlandData();

	// p1이 영수증 달라고 함
	Person p1_receipt (p1);
	p1_receipt.ShowData();

	return 0;
}