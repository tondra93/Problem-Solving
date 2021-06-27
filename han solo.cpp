#include<iostream>
using namespace std;
int main()
{
    int n,x,y,a=0,dx1,dy1,dx2,dy2,b[1000][2];
    cin>>n>>x>>y;
    bool z[1000];
    for(int i=0;i<n;i++)cin>>b[i][0]>>b[i][1];
    for(int i=0;i<n;i++)
    {
        if(z[i])continue;
        a++;
        dx1=b[i][0]-x,dy1=b[i][1]-y;
        for(int j=0;j<n;j++)
        {
            dx2=b[j][0]-x,dy2=b[j][1]-y;
            if(dx2*dy1==dy2*dx1)z[j]=1;
        }
    }
    cout<<a<<endl;
    return 0;
}
