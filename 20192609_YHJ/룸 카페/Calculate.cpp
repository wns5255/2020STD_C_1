#include <iostream>
#include "RoomCafe.h"
#include "Calculate.h"
using namespace std;

Calculate::Calculate(int N)
{
	numOfPeople = N;
	Result = 8000 * numOfPeople;
}


void Calculate::Choice(OfferThings& things)
{
	int num;
	things.ShowList();
	cout << "선택하실 메뉴가 있으시면 해당 숫자, 없으시면 그 외의 숫자를 입력해주세요. : ";
	cin >> num;

	Result += things.ExtraCharge(num);
}

void Calculate::ShowDataInfo()
{
	cout << "현재 " << numOfPeople << "분 입장 도와드리겠습니다. 총 결과 " << Result << "원 입니다." << endl;
}
