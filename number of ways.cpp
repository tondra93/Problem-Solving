#include<bits/stdc++.h>
using namespace std;
int a[1000010];
long long cnt[1000010];
int main()
{
    int n;
    cin>>n;
    long long b=0;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        b+=a[i];
    }
    if(b%3!=0)
    {
        cout<<0<<endl;
    }
    else
    {
        b/=3;
        long long c=0;
        for(int i=n-1;i>=0;--i)
        {
            c+=a[i];
            if(c==b)
                cnt[i]=1;

        }
        for(int i=n-2;i>=0;--i)
        {
            cnt[i]+=cnt[i+1];
        }
        long long d=0;
        c=0;
        for(int i=0;i+2<n;++i)
        {
            c+=a[i];
            if(c==b)
            {
                d+=cnt[i+2];
            }
        }
        cout<<d<<endl;
    }
    return 0;
}
