#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y,z,k;
cin>>x>>y;
x=0;
while(cin>>k>>z)
{
x=max(k-(y-z),x);
}
cout<<x+y<<endl;
return 0;
}
