#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hi I am an Electrical Engineering student";
    stringstream obj(s);
    string x;
    while(obj >> x)
    {
        cout<<x<<endl;
    }
    return 0;
}