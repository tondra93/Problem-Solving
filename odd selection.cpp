#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int Odd(int x,int odd,int even)
{
    if(odd==0)
        return 0;
    if(odd>x)
    {
        if(x%2!=0 || even>=1)
            return 1;
        else
            return 0;

    }
    else{
        if(odd%2!=0)
            return 1;
        else if(even>x-odd)
            return 1;
        else
            return 0;
    }
}
int main()
{
    int t,n,num,x,odd;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        odd=0;
        cin>>n>>x;
        for(int j=0;j<n;j++)
        {
            cin>>num;
            if(num%2!=0)
                odd++;

        }
        if(Odd(x,odd,n-odd)==1)
        {
            cout<<"YES"<<endl;

        }
        else
            {
               cout<<"NO"<<endl;
            }

    }
    return 0;


}
