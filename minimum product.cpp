#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long a,b,x,y,n;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>x>>y>>n;
        long long base=min(a-x,n);
        long long res=n-base;
        long long MIN=a*b;
        MIN = min(MIN, (a-base)*(max(b-res, y)));
        base = min(b-y, n);
        res = n - base;

        MIN = min(MIN, (b-base)*(max(a-res, x)));

        cout << MIN << endl;
    }
    return 0;
}
