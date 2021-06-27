#include<bits/stdc++.h>
using namespace std;
void sol()
{
    long long i,j,k=0,n,m,a,b,c,sum=0,x=0,cnt=0;
    cin>>n;
    long long s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        sum+=s[i];
    }
    a=sum;
    sort(s,s+n);
    for(int i=0;i<n-2;i++)
    {
        sum=sum-s[i];
        k+=sum;
    }
    if(n>1)
    {
        x=(a*2)+k;
    }
    else
    {
        x=sum;
    }
    cout<<x<<endl;
}
int main()
{
    sol();
}
