#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m=0, a;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        m = max(m,a);
    }
    cout<<m;
    return 0;
}