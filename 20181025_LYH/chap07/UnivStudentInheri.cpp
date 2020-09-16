#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	int age;
	char name[50];
public:
	Person(int myage, const char* myname) : age(myage)
	{
		strcpy(name, myname);
	}
	void WhatYourName(void) const
	{
		cout << "My name is " << name << endl;
	}
	void HowOldAreYou(void) const
	{
		cout << "I am " << age << " years old" << endl;
	}
};

class UnivStudent : public Person
{
private:
	char major[50];
public:
	UnivStudent(const char* myname, int myage,  const char* mymajor) : Person(myage, myname)  // 부모 생성자 호출해서 부모의 멤버 초기화
	{
		strcpy(major, mymajor);
	}
	void WhoAreYou(void)
	{
		WhatYourName();
		HowOldAreYou();
		cout << "My major is " << major << endl << endl;
	}
};

int main(void)
{
	UnivStudent ustd1("Lee", 22, "Computer eng.");
	ustd1.WhoAreYou();

	UnivStudent ustd2("Yoon", 21, "Electronic eng.");
	ustd2.WhoAreYou();
	return 0;
}

/*
자식 클래스의 생성자는 부모 클래스의 멤버를 초기화할 의무가 있다!

자식 클래스는 부모의 private 멤버에 접근 불가. ( 상속은 받지만 접근은 X) (간접적으로 접근해야함)
*/