#include <iostream>
using namespace std;

int main(void) {
	int h, m;

	while (true) {
		cin >> h >> m;
		if (0 <= h <= 23 && 0 <= m <= 59)
			break;
		else
			cout << "잘못된 입력입니다." << endl;
	}

	if (m >= 45)
		m -= 45;
	else {
		h -= 1;
		m += 15;
	}

	if (h < 0)
		h = 23;

	cout << h << " " << m;
	return 0;
}