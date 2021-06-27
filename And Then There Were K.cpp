#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long n;
   while(t--){

    cin>>n;
    if(n==1){
        cout<<"0";
    }
    else{
        long long j,p;
    for(int i=0;i<=n;i++){
         p=1<<i;
        if(n<=p){
            j=i;
            break;
        }
    }
    if(p==n){
        cout<<n-1;
    }
    else{
        j--;
        long long k=1<<j;
        cout<<p-k-1;
    }
    }
    cout<<endl;
}

return 0;
}
