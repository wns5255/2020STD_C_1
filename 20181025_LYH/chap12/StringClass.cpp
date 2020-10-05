#include <iostream>
#include <cstring>
#include "StringClass.h"
using namespace std;

// �����س��� ���߿� �ʱ�ȭ�ϴ� ���. ���ڿ��� �Է¹޾� �����ϴ� ���.
String::String()
{
	len = 0;
	str = NULL;
}

String::String(const char* s)
{
	len = strlen(s) + 1;
	str = new char[len];  // �����Ҵ�
	strcpy(str, s);
}

String::String(const String& s)  //  ���� ����
{
	len = strlen(s.str) + 1;
	str = new char[len];
	strcpy(str, s.str);
}

String::~String()
{
	if (str != NULL)
		delete[] str;  // �Ҵ� ����
}

String& String::operator=(const String& s)  // ���� ������ ���Կ����� ����
{
	if (str != NULL)
		delete[] str;
	len = s.len + 1;
	str = new char[len];
	strcpy(str, s.str);
	return *this;
}

String& String::operator+=(const String& s)  // += ������ �����ε�
{
	len += s.len - 1;
	char* tempstr = new char[len];  // �迭�� Ȯ���� �Ұ����ϱ� ������ ���ο� ���ڿ� ���Ҵ�
	strcpy(tempstr, str);
	strcat(tempstr, s.str);

	if (str != NULL)
	{
		delete[] str;
	}
	str = tempstr;  // tempstr�� ����Ű�� �ִ� �Ҵ�� ������ str�� ����Ŵ
	return *this;
}

bool String::operator==(const String& s)  // == ������ �����ε�
{
	return strcmp(str, s.str) ? false : true;
}

String String::operator+(const String& s)  // + ������ �����ε�
{
	char* tempstr = new char[len + s.len - 1];  // NULL�� �ι� ���༭ �ϳ� ����
	strcpy(tempstr, str);
	strcat(tempstr, s.str);  // ���ڿ� ���̱�. ù��° ���ڿ� �ι�° ������ ���ڿ��� ����.

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
