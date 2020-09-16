#include <iostream>
#include "School.h"

using namespace std;

int main(void) {
	House h;
	Bus b;
	Subway s;
	ITstudyroom i;
	Howlong hl;

	h.Get_Up();
	h.TodayWeather();
	b.Get_Ride(h);
	s.Get_Ride(h);
	i.Buycoffee();

	hl.ArriveSchool(h, b, s, i);
	
	hl.Totaltime();
	hl.CheckupLate();



	return 0;
}