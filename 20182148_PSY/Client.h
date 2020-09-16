#ifndef __CLIENT_H
#define __CLIENT_H

#include "horse.h"

class Client
{
	int num, myMoney, min;
	Horse horse;
public:
	Client (int money, int n, int m) : myMoney(money), num(n), min(m) {}
	void PAY()
	{
		if (myMoney >= horse.SaleHorse(num))
			cout << "거스름돈: " << myMoney - horse.SaleHorse(num) << "\n";
		else
			cout << "한도초과" << "\n";

	}
	void TAKE()
	{
		if (horse.Full(num)&& horse.WaitTime(min))
			cout <<horse.Seat(num)<< "명 탑승하세요" << endl;
		else if (horse.WaitTime(min) == 0 or horse.Full(num) == 0)
			if(horse.WaitTime(min)==0)
				cout << min % 10 << "분 뒤 탑승 가능" << endl;
			else if (horse.Full(num) == 0)
				cout <<horse.Seat(num)<< "명만 탑승 가능" << endl;

	}


};


#endif