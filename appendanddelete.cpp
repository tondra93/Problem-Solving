#include<iostream>
#define sz(x) ((int) (x).size())
using namespace std;
int main(){
    string s,t;
    int k;
    cin>>s>>t>>k;
    int p=0;
    while(p < min(sz(s),sz(t))&& s[p] == t[p])++p;
    int tmin;
    if(k%2==(sz(s)+sz(t))%2){
        tmin = sz(s)+sz(t)-2*p;
    }
    else{
        tmin = sz(s)+sz(t)+1;
    }
    if(k<tmin)cout<<"No\n";
    else cout<<"Yes\n";
    return 0;
}