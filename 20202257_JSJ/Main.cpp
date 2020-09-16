#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Menu.h"
#include "Order.h"


int main(void) {
	Order order;
	Order order1;

	Menu* o1 = new Burger("Thigh", 3800);
	Menu* o2 = new Burger("Incredible", 4900);
	Menu* o3 = new Chicken("Fried", 15000);
	Menu* o4 = new Burger("Bulgogi", 3000);

	o1->UpSet();
	o3->UpSet();
	o4->UpSet();
	
	order.SelMenu(o1);
	order.SelMenu(o2);
	order.SelMenu(o3);
	order1.SelMenu(o4);

	order.Pay_Card();
	order1.Pay_Cash();


	return 0;
}