#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long n;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        long long int sum=(n*(n+1))/2;
        long long int ans=0;
        for(long long int i=0;i<32;i++)
        {
            long long int x=pow(2,i);
            if(x<=n)
            {
                ans+=x;

            }
            else
            {
                break;
            }

        }
        cout<<sum-2*ans<<endl;
    }
    return 0;
}
