#include<bits/stdc++.h>
using namespace std;
int a[1000000+5];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        bool ton=false;
        for(int i=1;i<n;i++)
        {
            if(a[i]>=a[i-1])
            {
                ton=true;
                break;
            }
        }
        if(ton)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
