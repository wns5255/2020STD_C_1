#include <iostream>
using namespace std;

void count(int& piece, int num )
{
	if (piece == num)
		cout << 0 << " ";
	else
		cout << num - piece << " ";

}

int main(void)
{
	int k, q, l, v, n, p;
	cin >> k >> q >> l >> v >> n >> p;

	count(k, 1);
	count(q, 1);
	count(l, 2);
	count(v, 2);
	count(n, 2);
	count(p, 8);


	return 0;
}