#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int l,r;
    for(int i=0;i<t;i++)
    {
        cin>>l>>r;
        if(2*l<=r)
        {
            cout<<l<< " " <<2*l<<endl;
        }
        else
            cout<< -1 << " " <<-1<<endl;
    }
    return 0;
}
