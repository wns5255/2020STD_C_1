#include <iostream>
using namespace std;

int main(void) {
	double a, b;
	cin >> a >> b;
	cout.precision(15);
	cout << a/b << endl;
	return 0;
}

/*
float는 소수점 이하 6번째 자리까지
double은 소수점 이하 15번째 자리까지
*/