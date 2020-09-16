/* 개인 과제입니다
1. 현실이 있는 모든 개념에서 한가지를 선택하여 추상화 할것 
2. 추상화 후 클래스는 적어도 4개 이상
3. 상속 개념을 부여할 것
4. 순수가상 함수를 사용하여 추상 클래스를 적용하고 해당 부분도 상속개념을 사용할것 
5. 클래스 간의 기능은 해당 클래스에 대한 추상화에 맞게 메서드를 구현할것 
(놀이동산에서 탄다라는 개념은 개별적인 것) 
6. 메서드간 통신은 무조건 레퍼런스를 사용*/

#include <iostream>
#include "Calculate.h"
#include "Person.h"
#include "RoomCafe.h"
using namespace std;

int main(void)
{
	cout << "룸카페 입장\n\n"<<"입장하실 인원을 말씀해주세요. : ";
	int N = 0;
	cin >> N;

	Calculate cal(N);	

	OfferFood food;
	OfferMovie movie;
	OfferBoardGame boardGame;
	
	cal.Choice(food);
	cal.Choice(movie);
	cal.Choice(boardGame);

	cal.ShowDataInfo();

	return 0;
}
