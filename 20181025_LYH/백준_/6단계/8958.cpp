#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
	int num;
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		char quiz[80];
		cin >> quiz;
		int n = strlen(quiz);

		int score = 0;
		int total = 0;
		for (int j = 0; j < n; j++) {
			if (quiz[j] == 'O') {
				score++;
			}
			else {
				score = 0;
			}
			total += score;
		}
		cout << total << endl;
	}
	return 0;
}