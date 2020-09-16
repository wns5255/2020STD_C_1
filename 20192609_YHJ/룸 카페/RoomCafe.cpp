#include <iostream>
#include "RoomCafe.h"
using namespace std;

void OfferFood::ShowList()
{
	cout << "\n-----------FOOD--------------" << endl;
	cout << "|                           |" << endl;
	cout << "|   1.    컵라면  1500원    |" << endl;
	cout << "|   2.    떡볶이  3000원    |" << endl;
	cout << "|   3.  김치볶음밥 5500원   |" << endl;
	cout << "|   4.  돈까스정식 8500원   |" << endl;
	cout << "|                           |" << endl;
	cout << "-----------------------------\n" << endl;
}

void OfferMovie::ShowList()
{
	cout << "\n-----------ㅡMOVIE--------------" << endl;
	cout << "|                              |" << endl;
	cout << "|     1. 신과함께 1  1500원    |" << endl;
	cout << "|     2. 신과함께 2  2000원    |" << endl;
	cout << "|     3. 아이언맨 1  1000원    |" << endl;
	cout << "|     4. 겨울왕국 2  3500원    |" << endl;
	cout << "|                              |" << endl;
	cout << "-------------------------------\n" << endl;
}

void OfferBoardGame::ShowList()
{
	cout << "\n-----------ㅡBoardGame---------" << endl;
	cout << "|                             |" << endl;
	cout << "|       1. 할리갈리  1000원   |" << endl;
	cout << "|       2. 루미큐브  1000원   |" << endl;
	cout << "|       3. 부루마블  1500원   |" << endl;
	cout << "|                             |" << endl;
	cout << "-------------------------------\n" << endl;
}

int OfferFood::ExtraCharge(int num)
{
	switch (num)
	{
	case 1:
		return 1500;
	case 2:
		return 3000;
	case 3:
		return 5500;
	case 4:
		return 8500;
	default :
		return 0;
	}
}

int OfferMovie::ExtraCharge(int num)
{
	switch (num)
	{
	case 1:
		return 1500;
	case 2:
		return 2000;
	case 3:
		return 1000;
	case 4:
		return 3500;
	default:
		return 0;
	}
}

int OfferBoardGame::ExtraCharge(int num)
{
	switch (num)
	{
	case 1:
		return 1000;
	case 2:
		return 1000;
	case 3:
		return 1500;
	default:
		return 0;
	}
}
