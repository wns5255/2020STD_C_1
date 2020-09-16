// const 객체
//#include <iostream>
//using namespace std;
//
//class SoSimple {
//private:
//	int num;
//public:
//	SoSimple(int n) : num(n)
//	{}
//	SoSimple& AddNum(int n)
//	{
//		num += n;
//		return *this;
//	}
//	void ShowData() const
//	{
//		cout << "num: " << num << endl;
//	}
//};
//
//int main(void)
//{
//	const SoSimple obj(7);  // 이 객체의 데이터 변경을 허용하지 않겠다!
//	// obj.AddNum(20);  ==>  오류
//	obj.ShowData();  // const함수만 호출 가능
//	return 0;
//}