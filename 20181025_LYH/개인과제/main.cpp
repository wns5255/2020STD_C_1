#include <iostream>
#include "Game.h"
using namespace std;

int main(void)
{
	Game game;

	// 영웅 선택
	Diva diva;
	Tracer tracer;
	Ana ana;

	// 인공지능 생성
	game.Create_AI();
	cout << endl;
	
	// 1라운드
	game.Fight(diva);
	game.Suffer(diva);
	game.Support(ana, diva);
	game.ShowData(); // 라운드 종료
	cout << endl;

	// 2라운드
	game.Fight(tracer);
	game.Fight(diva);
	game.Suffer(tracer);
	game.Support(ana, tracer);
	game.Fight(diva);
	game.ShowData();
	cout << endl;

	// 3라운드
	game.Fight(diva);
	game.Fight(tracer);
	game.Suffer(tracer);
	game.Suffer(diva);
	game.Support(ana, diva);
	game.Support(ana, tracer);
	game.Fight(diva);
	game.ShowData();

	return 0;
}