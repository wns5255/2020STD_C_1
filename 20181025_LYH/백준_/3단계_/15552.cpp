// ºü¸¥ A+B
#include <iostream>
using namespace std;

int main() {
	int t;
	int a, b;

	cin.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		cout << a + b << "\n";
	}
	return 0;
}