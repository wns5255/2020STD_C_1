#include <iostream>
#include <cstdlib>  // exit�� ���� ����
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
		// ��� �˻�
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
		cout << ref[i] << endl;  // ������ ����
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
37�࿡�� ������ ������ ����.
const�����ڸ� ������� ���� ���� �ɷ��� ���� �Լ��� ȣ�� ���X �ϱ� ����.
*/