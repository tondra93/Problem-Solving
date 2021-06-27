#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b,x;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        x=(abs(a-b)+9)/10;
        cout<<x<<endl;
    }
    return 0;
}
