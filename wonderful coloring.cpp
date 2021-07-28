#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
int c,k,l,t,i;
string s;
cin>>t;
while(t-->0)
{
    cin>>s;
    c=0;
    k=0;
    int a[26]={0};
    l=s.length();
    for(i=0;i<l;i++) a[s[i]-'a']+=1;

    for(i=0;i<26;i++)
    {
        if(a[i]>1){c+=1;}
        if(a[i]==1){k+=1;}
    }
    cout<<c+k/2<<endl;
}
}

