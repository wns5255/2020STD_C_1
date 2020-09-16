#include <iostream>
#include <cstring>
using namespace std;


class Person
{
private:
	char* name;
public:
	Person(const char* myname)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
	}
	~Person(void)
	{
		delete[] name;
	}
	void WhatYourName(void) const
	{
		cout << "My name is " << name << endl;
	}
};

class UnivStudent : public Person
{
private:
	char* major;
public:
	UnivStudent(const char* myname, const char* mymajor) : Person(myname)
	{
		major = new char[strlen(mymajor) + 1];
		strcpy(major, mymajor);
	}
	~UnivStudent(void) 
	{
		delete[] major;
	}
	void WhoAreYou(void)
	{
		WhatYourName();
		cout << "My major is " << major << endl << endl;
	}
};

int main(void)
{
	UnivStudent st1("Kim", "Mathematics");
	st1.WhoAreYou();

	UnivStudent st2("Hong", "Physics");
	st2.WhoAreYou();
	return 0;
}

/*
생성자에서 동적할당한 메모리 공간은 소멸자에서 해제한다.
*/