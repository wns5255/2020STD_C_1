#include <iostream>
#include "Ride.h"
#include "Menu.h"
#include "Person.h"
#include "Ticket.h"

using namespace std;

int main(void)
{
	Person person;
	Ride ride;
	Menu menu;

	person.PAY();
	ride.Check();
	person.TAKE();

	menu.ShowMenu();
	menu.Calculate("GongChar", 2);

	return 0;
}