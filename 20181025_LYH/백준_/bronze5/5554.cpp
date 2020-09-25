#include <iostream>
using namespace std;

int maain(void)
{
	int seconds[4];
	int total = 0;
	int x = 0, y = 0;

	for (int i = 0; i < 4; i++)
	{
		cin >> seconds[i];
		total += seconds[i];
	}

	
	while(total >= 60)
	{
		total -= 60;
		x++;
	}
	
	y = total;

	cout << x << endl;
	cout << y << endl;

	return 0;
}