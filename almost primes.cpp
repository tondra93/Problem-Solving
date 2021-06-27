#include<bits/stdc++.h>
using namespace std;
bool Prime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    int t=0;
    for(int i=1;i<=n;i++)
    {
        int cnt=0;
        for(int j=2;j<sqrt(i);j++)
        {
            if(i%j==0)
            {
                if(Prime(j))

                    cnt++;
                    if(Prime(i/j))
                    cnt++;



            }
        }
        if(cnt==2)
            t++;
    }
    cout<<t<<endl;
}
