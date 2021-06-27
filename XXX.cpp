#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        for(int i=0;i<n;i++){
        int a[n];
        cin>>a[i];
        int sum=0;
        sum=sum+a[i];
        }
        if(sum%x!=0){
            int len=sizeof(a)/sizeof(a[0]);
            cout<<len<<endl;
        }
        else if(sum%x==0){
            cout<<-1<<endl;
        }
        else{

        }




    }
}
