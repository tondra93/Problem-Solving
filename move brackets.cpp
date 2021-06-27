#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    int n;
    string s;
    while(t--)
    {
        cin>>n>>s;
        stack<char>st;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')st.push(s[i]);
            else{
                if(!st.empty()&&st.top()=='(')st.pop();
                else ++count;
            }
        }
        cout<<(count+int(st.size())+1)/2<<endl;
    }
    return 0;
}
