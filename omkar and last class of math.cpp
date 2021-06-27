#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x;
        long long int y=1;
        cin>>x;
        for(int i=2;i*i<=x;i++)
        {
            if(x%i==0)
            {
                y=max(y,x/i);
            }
        }
        cout<<y<<" "<<x-y<<endl;
    }
    return 0;
}
