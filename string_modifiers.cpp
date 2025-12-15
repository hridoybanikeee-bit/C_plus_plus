#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hridoy";
    string t = " Banik";
    //s += t;
    s.append(t);
    cout<<s<<endl;
    s.push_back('Y');
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;
    string p = "John Cena";
    s.assign(p);
    cout<<s<<endl;
    string a = "Hridoy Banik Akash";
    a.erase(7,5);
    cout<<a<<endl;
    string b ="Hello World";
    b.replace(6,5,"Akash");
    cout<<b<<endl;
    return 0;
}