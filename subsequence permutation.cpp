#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string a=s;
    sort(a.begin(),a.end());
    int ans=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=s[i])
            ans++;
    }
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
