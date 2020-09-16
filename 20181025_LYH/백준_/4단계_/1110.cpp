#include <iostream>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	int m = n;
	int count = 0;

	while (true) {
		int m10 = m / 10;
		int m1 = m % 10;
		int s = m10 + m1;
		m = (m1 * 10) + (s % 10);
		count++;
		if (m == n)
			break;
	}

	cout << count << endl;
	return 0;
}