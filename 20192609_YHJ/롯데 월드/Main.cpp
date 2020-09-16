#include <iostream>
#include "Ride.h"
#include "Menu.h"
#include "Person.h"

using namespace std;

int main(void)
{
	Person person1;
	Ride ride1;
	Person person2 = person1;
	Menu menu;

	ride1.SaleRide(14, 1);
	person1.PAY();
	person2.PAY();
	ride1.WithParents();
	ride1.SetSeat(1);
	person1.TAKE();
	person2.TAKE();

	menu.ShowMenu();
	menu.Calculate("GongChar", 2);




	return 0;
}
