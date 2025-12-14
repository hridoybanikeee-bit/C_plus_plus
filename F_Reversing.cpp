#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int b[n];
   for(int i=0; i<n; i++)
   {
        cin>>b[i];
   }
   int i=0;
   int j = n-1;
   while(i<j)
   {
    swap(b[i],b[j]);
    i++;
    j--;
   }
   for(int i=0; i<n; i++)
   {
    cout<<b[i]<<" ";
   }
    
    return 0;
}