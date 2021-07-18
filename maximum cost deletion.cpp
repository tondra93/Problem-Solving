#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n;
        string s;
        cin>>n>>a>>b>>s;
        int x=unique(s.begin(),s.end())-s.begin();
        cout<<n*a+max(n*b,(x/2+1)*b)<<endl;
    }
    return 0;
}
