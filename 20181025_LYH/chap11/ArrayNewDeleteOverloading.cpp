#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) :xpos(x), ypos(y)
	{}
	friend ostream& operator<<(ostream& os, const Point& pos);

	// new ������ �����ε�
	void* operator new(size_t size)
	{
		cout << "operator new: " << size << endl;
		void* adr = new char[size];  // char���� 1����Ʈ�̱� ������ // �޸� �Ҵ�
		return adr;
	}
	// �迭 new ������ �����ε�
	void* operator new[](size_t size)
	{
		cout << "operator new: " << size << endl;
		void* adr = new char[size];  // char���� 1����Ʈ�̱� ������ // �޸� �Ҵ�
		return adr;
	}

	// delete ������ �����ε�
	void operator delete(void* adr)
	{
		cout << "operator delete()" << endl;
		delete[] adr;  // �޸� ����
	}
	// �迭 delete ������ �����ε�
	void operator delete[](void* adr)
	{
		cout << "operator delete()" << endl;
		delete[] adr;  // �޸� ����
	}
};

ostream& operator<<(ostream& os, const Point& pos)
{
	os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
	return os;
}

int main(void)
{
	Point* ptr = new Point(3, 4);
	Point* arr = new Point[3];

	delete ptr;
	delete[] arr;

	return 0;
}

/*
�迭�� �����Ҵ�&���� �� �� ���� ���̶�� �� ���� �Ȱ���.

��� ���:
operator new : 8
operator new [] : 24
operator delete ()
operator delte[] ()
*/