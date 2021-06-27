#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        int x,y;
        x=max(2*b,a);
        y=max(2*a,b);
        int area=min(x,y);
        cout<<area*area<<endl;
    }
    return 0;
}
