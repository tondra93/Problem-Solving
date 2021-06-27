#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n],b[n];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=n-1;i>=0;i--)cin>>b[i];
        int temp=-1;
        for(int i=0;i<n;i++)
        {
            if(a[i]+b[i]>x)
            {
                temp=0;
                break;
            }

        }
        if(temp==0)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;

    }
    return 0;
}
