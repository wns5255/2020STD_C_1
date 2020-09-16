#ifndef __TICKET_H_
#define __TICKET_H_

#include<iostream>
using namespace std;
enum AGE { CHILED = 1, STUDENT, ADULT, GRAND, EMPTY };

class Ticket
{
private:
	int cost;
public:

	Ticket(int myAge, int n)
	{
		int CheckAge = 0;
		if (myAge > 0)
		{
			if (myAge <= 13)
				CheckAge = AGE::CHILED;
			else if (myAge <= 18)
				CheckAge = AGE::STUDENT;
			else if (myAge <= 55)
				CheckAge = AGE::ADULT;
			else
				CheckAge = AGE::GRAND;
		}
		else
			CheckAge = AGE::EMPTY;

		if (CheckAge == 1)
			cost = 1000;
		else if (CheckAge == 2)
			cost = 2000;
		else if (CheckAge == 3)
			cost = 3000;
		else if (CheckAge == 4)
			cost = 1500;
		else
			cost = 3000;

		cost = cost * n;
	}

	int CostReturn()
	{
		return cost;
	}


};

#endif
