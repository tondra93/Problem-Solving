#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string a;
        cin>>n>>a;
        for(int i=0;i<a.size();i++)
        {
            if(i%2==0)
                cout<<a[i];
        }
        cout<<endl;
    }
    return 0;
}
