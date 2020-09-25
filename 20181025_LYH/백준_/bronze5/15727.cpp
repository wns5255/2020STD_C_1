#include <iostream>
using namespace std;

int main(void)
{
	int distance;
	int time = 0;
	cin >> distance;

	while (distance > 5)
	{
		distance -= 5;
		time++;
	}

	if (distance > 0)
		time++;

	cout << time << endl;

	return 0;
}