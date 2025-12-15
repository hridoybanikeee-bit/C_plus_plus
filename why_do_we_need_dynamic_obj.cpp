#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int id;
    int age;

    student(int id, int age)
    {
        this->id = id;
        this->age = age;
    }
};

student* fun()
{
    student a(55, 3);
    student *p = &a;
    return p;
}
int main()
{
    student* obj = fun();
    cout<<obj->age<<endl<<obj->id;
    return 0;
}