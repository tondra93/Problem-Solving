#include<iostream>
using namespace std;
int main()
{
    long long x,y,z=0,a,b=0;
    cin>>x>>y;
    while(x--)
    {
        cin>>a;
        z*=y;
        z+=a;
    }
     cin>>x>>y;
    while(x--)
    {
        cin>>a;
        b*=y;
        b+=a;
    }
    if(z>b)
        cout<<">"<<endl;
    else if(z<b)
        cout<<"<"<<endl;
    else
        cout<<"="<<endl;
    return 0;
}
