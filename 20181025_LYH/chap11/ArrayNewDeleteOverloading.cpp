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

	// new 연산자 오버로딩
	void* operator new(size_t size)
	{
		cout << "operator new: " << size << endl;
		void* adr = new char[size];  // char형이 1바이트이기 때문에 // 메모리 할당
		return adr;
	}
	// 배열 new 연산자 오버로딩
	void* operator new[](size_t size)
	{
		cout << "operator new: " << size << endl;
		void* adr = new char[size];  // char형이 1바이트이기 때문에 // 메모리 할당
		return adr;
	}

	// delete 연산자 오버로딩
	void operator delete(void* adr)
	{
		cout << "operator delete()" << endl;
		delete[] adr;  // 메모리 해제
	}
	// 배열 delete 연산자 오버로딩
	void operator delete[](void* adr)
	{
		cout << "operator delete()" << endl;
		delete[] adr;  // 메모리 해제
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
배열을 동적할당&해제 할 때 쓰는 것이라는 것 빼곤 똑같음.

출력 결과:
operator new : 8
operator new [] : 24
operator delete ()
operator delte[] ()
*/