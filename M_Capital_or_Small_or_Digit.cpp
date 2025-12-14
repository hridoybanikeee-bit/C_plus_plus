#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    int a = int(ch);
    if((a>= 48) & (a<=57))
    {
        cout<<"IS DIGIT";
    }
    else if((a>=65) & (a<=90))
    {
        cout<<"ALPHA"<<endl<<"IS CAPITAL";
    }
    else
    {
        cout<<"ALPHA"<<endl<<"IS SMALL";
    }
    return 0;
}