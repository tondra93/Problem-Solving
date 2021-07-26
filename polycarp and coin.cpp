#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int c1,c2,a;
        c1=c2=a=n/3;
        if(n-3*a==1)
        {
            c1++;
            cout<<c1<<" "<<c2<<endl;
        }
        else if(n-3*a==2)
        {
            c2++;
            cout<<c1<<" "<<c2<<endl;
        }
        else{
            cout<<c1<<" "<<c2<<endl;
        }
    }
    return 0;
}
