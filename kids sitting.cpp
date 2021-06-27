#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
   while(t>0)
   {
       cin>>n;
       int i;
       for(i=2*n;i<4*n;i=i+2)
       {
           cout<<i<<" ";
       }
       t--;
   }
   return 0;
}
