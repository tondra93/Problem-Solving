#include <bits/stdc++.h>
using namespace std;
int arr[50001][6];

bool isBetter(int x,int y)
{
int cnt=0;
    for (int i = 1; i <=5  ; ++i) {
        if(arr[x][i]<arr[y][i]) cnt+=1;
    }
    if(cnt>2)
        return true;
    return false;

}

void solve()
{

    int n;
    cin>>n;
    for (int i = 1; i <=n ; ++i) {
        for (int j = 1; j <=5 ; ++j) {
            cin>>arr[i][j];
        }
    }
    int best = 1;
    for (int i = 2; i <= n; ++i) {
        if(isBetter(i,best)) best=i;
    }

    for (int i = 1; i <= n ; ++i) {
        if(i!=best && !isBetter(best,i))
        {
            cout<<-1<<"\n";
            return;
        }
    }
    cout<<best<<"\n";

}
int32_t main() {
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }

}
