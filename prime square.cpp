
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,i,j;
        cin >> n;
        int a[n][n];
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                a[i][j]=0;
            }
        }

        a[n-1][0] = 1;
        a[n-1][n-1] = 1;

        for(i=0; i<n-1; i++)
        {
            a[i][i] = 1;
            a[i][i+1] = 1;
        }

        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                cout << a[i][j] << " ";
            }
             cout << endl;
        }
        cout << endl;


    }
    return 0;
}

