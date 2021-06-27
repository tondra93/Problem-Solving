#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x,y,i,cnt=0;
    cin>>a>>b>>c;
    if(c%a==0 || c%b==0)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if(a%2==1)
    {
        x=a,y=b;
    }
    else{
        x=b,y=a;
    }
    if(c%2==1)
    {
        if(a%2==0 && b%2==0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        if(y%2!=1 && x%2==1)
        {
            for(i=c-x;i>0;i-=2*x)
            {
                if(i%y==0)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
            if(i<=0)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    if((y%2==1&&c%2==1)||(x%2==0&&y%2==0&&c%2==0)||(x%2==1&&y%2==1&&c%2==0))
    {
        x=max(a,b);
        y=min(a,b);
        for(i=c-x;i>0;i-=x)
        {
            if(i%y==0)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        if(i<=0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if(y%2==0 && c%2==0)
    {
        if(y%2==1&&x%2==1)
        {
            x=max(a,b);
            y=min(a,b);
        }
        for(i=c-2*x;i>0;i-=2*x)
        {
            if(i%y==0)
            {
                cout<<"YES"<<endl;
                return 0;
            }

        }
        if(i<=0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
}
