// 달달함이 흘러넘쳐

#include <iostream>
using namespace std;

int main(void)
{
	int ax, ay, az;
	int cx, cy, cz;
	int bx, by, bz;

	cin >> ax >> ay >> az >> cx >> cy >> cz;

	bx = cx - az;
	by = cy / ay;
	bz = cz - ax;

	cout << bx << " " << by << " " << bz;
	return 0;
}
