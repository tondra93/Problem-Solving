#include<bits/stdc++.h>
using namespace std;
void check(int r,int b,int d)
{
    if(abs(r-b)<=d)
    {
        cout<<"YES"<<endl;
        return;
    }
    else if(r<=1 || b<=1 || d==0){
        cout<<"NO"<<endl;
        return;
    }
    else if(r>b){
         if (((r / (d+1)) + ((r % (d+1))?1:0)) > b) {
            printf("NO\n");
            return;
        }
        else {
            printf("YES\n");
            return;
        }
    }
    else if(r<b){
        if (((b / (d + 1)) + ((b % (d+1)) ? 1 : 0)) > r) {
            printf("NO\n");
            return;
        }
        else {
            printf("YES\n");
            return;
        }
    }
}
int main()
{
    int t,r,b,d;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>r>>b>>d;
        check(r,b,d);
    }
    return 0;
}
