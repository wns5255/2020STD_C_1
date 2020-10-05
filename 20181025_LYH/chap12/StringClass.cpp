#include <iostream>
#include <cstring>
#include "StringClass.h"
using namespace std;

// 선언해놓고 나중에 초기화하는 경우. 문자열을 입력받아 저장하는 경우.
String::String()
{
	len = 0;
	str = NULL;
}

String::String(const char* s)
{
	len = strlen(s) + 1;
	str = new char[len];  // 동적할당
	strcpy(str, s);
}

String::String(const String& s)  //  깊은 복사
{
	len = strlen(s.str) + 1;
	str = new char[len];
	strcpy(str, s.str);
}

String::~String()
{
	if (str != NULL)
		delete[] str;  // 할당 해제
}

String& String::operator=(const String& s)  // 깊은 복사의 대입연산자 정의
{
	if (str != NULL)
		delete[] str;
	len = s.len + 1;
	str = new char[len];
	strcpy(str, s.str);
	return *this;
}

String& String::operator+=(const String& s)  // += 연산자 오버로딩
{
	len += s.len - 1;
	char* tempstr = new char[len];  // 배열은 확장이 불가능하기 때문에 새로운 문자열 재할당
	strcpy(tempstr, str);
	strcat(tempstr, s.str);

	if (str != NULL)
	{
		delete[] str;
	}
	str = tempstr;  // tempstr이 가리키고 있던 할당된 공간을 str이 가리킴
	return *this;
}

bool String::operator==(const String& s)  // == 연산자 오버로딩
{
	return strcmp(str, s.str) ? false : true;
}

String String::operator+(const String& s)  // + 연산자 오버로딩
{
	char* tempstr = new char[len + s.len - 1];  // NULL을 두번 세줘서 하나 빼줌
	strcpy(tempstr, str);
	strcat(tempstr, s.str);  // 문자열 붙이기. 첫번째 인자에 두번째 인자의 문자열을 붙임.

	String temp(tempstr);
	delete[] tempstr;
	return temp;
}

ostream& operator<<(ostream& os, const String& s)
{
	os << s.str << endl;
	return os;
}

istream& operator>>(istream& is, String& s)
{
	char str[100];
	is >> str;
	s = String(str);
	return is;
}
