/*
< 상근날드 >
입력은 총 5줄로 이루어져 있고, 원섭이의 점수, 세희의 점수, 상근이의 점수,
숭이의 점수, 강수의 점수가 순서대로 주어진다.

점수는 모두 0점 이상, 100점 이하인 5의 배수이다. 따라서, 평균 점수는 항상 정수이다.
*/

#include <iostream>
using namespace std;

int main(void) {
	int b[3];
	int coke, soda;
	int burger, drink, total;

	for (int i = 0; i < 3; i++)
		cin >> b[i];
	cin >> coke >> soda;

	burger = b[0];
	for (int i = 1; i <= 2; i++) {
		if (b[i] < burger)
			burger = b[i];
	}

	if (coke < soda)
		drink = coke;
	else
		drink = soda;

	total = burger + drink - 50;
	cout << total << endl;
	return 0;
}