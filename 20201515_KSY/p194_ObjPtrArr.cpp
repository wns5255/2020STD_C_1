#include <iostream>
#include <cstring>
using namespace std;

class Person
{
    // 예제 ObjArr.cpp의 Person 클래스와 동일하므로 생략합니다.
};

int main(void)
{
    Person * parr[3];
    char namestr[100];
    int age;
    
    for(int i = 0;i<3;i++)
    {
        cout<<"이름: ";
        cin>>namestr;
        cout<<"나이: ";
        cin>>age;
        parr[i]=new Person(namestr, age);
    }
    
    parr[0]->ShowPersonInfo();
    parr[1]->ShowPersonInfo();
    parr[2]->ShowPersonInfo();
    delete parr[0];
    delete parr[1];
    delete parr[2];
    return 0;
}
