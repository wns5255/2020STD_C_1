// >> ������ �����ε�

#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{}
	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
	friend istream& operator>>(istream&, Point&);
};

istream& operator>>(istream& is, Point& pos)
{
	is >> pos.xpos >> pos.ypos;
	return is;
}

int main(void)
{
	Point pos1;
	cout << "x, y ��ǥ ������ �Է�: ";
	cin >> pos1;

	Point pos2;
	cout << "x, y ��ǥ ������ �Է�: ";
	cin >> pos2;

	return 0;
}
