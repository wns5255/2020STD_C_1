/*
세 정수가 주어질 때, 두 번째로 큰 정수를 출력하는 프로그램
*/
#include <iostream>
using namespace std;

int main(void) {
	int a, b, c;
	cin >> a >> b >> c;
	int sort[3] = { a,b,c };
	
	for (int i = 2; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (sort[j] < sort[j + 1]) {
				int swap = sort[j];
				sort[j] = sort[j + 1];
				sort[j + 1] = swap;
			}
		}
	}

	cout << sort[1] << endl;
	return 0;
}