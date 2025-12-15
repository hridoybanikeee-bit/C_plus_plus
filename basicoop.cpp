#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int id;
    double gpa;
};
int main()
{
    Student a,b;
    cin.getline(a.name,100);
    cin>>a.id>>a.gpa;
    cin.ignore();
    cin.getline(b.name,100);
    cin>>b.id>>b.gpa;
    cin>>b.name>>b.id>>b.gpa;
    cout<<a.name<<" "<<a.id<<" "<<a.gpa<<endl;
    cout<<b.name<<" "<<b.id<<" "<<b.gpa<<endl;
    return 0;
}