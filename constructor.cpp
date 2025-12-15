#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int age;
    int id;
    double gpa;

    student(int a, int i, double g)
    {
        age = a;
        id = i;
        gpa = g;
    }

};
int main()
{
    student a(25,02,4.33);
    student b(23,34,3.44);
    cout<<a.age<<" "<<a.id<<" "<<a.gpa<<endl;
    cout<<b.age<<" "<<b.id<<" "<<b.gpa<<endl;
    return 0;
}