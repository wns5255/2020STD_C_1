/*
< 평균점수 >
입력은 총 5줄로 이루어져 있고, 원섭이의 점수, 세희의 점수, 상근이의 점수, 
숭이의 점수, 강수의 점수가 순서대로 주어진다.

점수는 모두 0점 이상, 100점 이하인 5의 배수이다. 따라서, 평균 점수는 항상 정수이다.
*/

#include <iostream>
using namespace std;

int main(void) {
	int a[5];
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		cin >> a[i];
		if (a[i] < 40)
			a[i] = 40;
		sum += a[i];
	}

	cout << sum / 5 << endl;
	return 0;
}