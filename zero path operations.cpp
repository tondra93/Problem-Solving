#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,y,z;
    cin>>t;
    int a[100001];
    int ans;
    while(t>0)
    {
        t--;
        memset(a,0,100001*sizeof(a[0]));
        ans=0;
        cin>>n;
        for(int i=1;i<n;i++)
        {
            cin>>x>>y;
            a[x-1]++;
            a[y-1]++;
        }
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x!=0 && a[i]>1)
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
