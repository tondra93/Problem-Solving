#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;

    if(n*a!=m*b)
    {
        cout<<"NO\n";
        return ;
    }
    else
    {
        cout<<"YES\n";
        int dp[n][m];
        int x=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
               dp[i][j]=0;
            }

        }

        for(int i=0;i<n;)
        {
            for(int j=1;j<=a;j++)
            {
                dp[i][x%m]=1;
                x++;
            }

            i++;
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<dp[i][j];
            }
            cout<<"\n";
        }
    }
}


int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(NULL);

    int tc;
    cin>>tc;

    while(tc--)
    {
        solve();
    }

    return 0;

}
