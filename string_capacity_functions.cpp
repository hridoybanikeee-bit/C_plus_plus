#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hridoy Banik Akash";
    
    cout<<s.size()<<endl;
    cout<<s.max_size()<<endl;
    cout<<s.capacity()<<endl;
    s.clear();
    cout<<s<<endl;
    s = "Hi there";
    if(s.empty() == 1)
    {
        cout<<"Empty it is"<<endl;
    }
    else
    {
        cout<<"Not Empty"<<endl;
    }
    string s2 ="akash";
    s2.resize(10,'T');
    cout<<s2<<endl;
    return 0;
}