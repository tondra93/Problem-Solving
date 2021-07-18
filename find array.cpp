#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,d;
        cin>>n;
        d=sqrt(n);
        if((d*d)!=n)
            d++;
        cout<<d<<endl;
    }
    return 0;
}
