#include<bits/stdc++.h>
using namespace std ;


int main()
{
    long long x,y,z,a,b,c,i;
    string s1,s2;
    cin>>s1>>s2 ;
    int k=0 ;
    for(i=0;i+s2.size()-1<s1.size() ; i++){
         string d = s1.substr(i,s2.size()) ;
        if(d==s2)
        {
        k++ ;
        i=i+ s2.size()-1 ;
        }
    }
    cout<<k<<endl ;
    return 0 ;
}

