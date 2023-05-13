#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    int t;
    int l=1;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        l=0;
        cin>>a;
        for(int j=0;j<a.length()/2-1;j++)
        {
            if(a[j]!=a[j+1])
            {
                cout<<"YES"<<endl;
                l=1;
                break;
            }
        }
        if(l==0)cout<<"NO"<<endl;
    }
}
