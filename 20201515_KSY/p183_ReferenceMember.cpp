#include <iostream>
using namespace std;

clas AAA
{
    cout<<"empty object"<<endl;
}
    void ShowYourName()
    {
        cout<<"I'm class AAA"<<endl;
    }
};

int main(void)
{
    AAA obj1;
    BBB obj2(obj1, 20);
    obj2.ShowYourName();
    return 0;
}
