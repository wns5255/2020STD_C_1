#include <iostream>
#include <cstdlib>  // exit를 쓰기 위해
using namespace std;

class BoundCheckIntArray
{
private:
	int *arr;
	int arrlen;
	BoundCheckIntArray(const BoundCheckIntArray& arr) {}
	BoundCheckIntArray& operator=(const BoundCheckIntArray& arr) {}
public:
	BoundCheckIntArray(int len) : arrlen(len)
	{
		arr = new int[len];
	}
	int& operator[](int idx)
	{
		// 경계 검사
		if (idx < 0 || idx >= arrlen)
		{
			cout << "Array index out of bound exception" << endl;
			exit(1);
		}
		return arr[idx];
	}

	int GetArrLen() const { return arrlen; }
	~BoundCheckIntArray()
	{
		delete[] arr;
	}
};

void ShowAllData(const BoundCheckIntArray& ref)
{
	int len = ref.GetArrLen();
	for (int i = 0; i < len; i++)
		cout << ref[i] << endl;  // 컴파일 에러
}

int main(void)
{
	BoundCheckIntArray arr(5);

	for (int i = 0; i < 5; i++)
		arr[i] = 11 * (i + 1);
	for (int i = 0; i < 6; i++)
		cout << arr[i] << endl;
	return 0;
}

/*
37행에서 컴파일 에러가 난다.
const참조자를 대상으로 값의 변경 능력을 가진 함수의 호출 허용X 하기 때문.
*/