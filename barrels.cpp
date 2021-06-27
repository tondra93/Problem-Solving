#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while(t--){
        long long int n,k;
        cin >> n >> k;
        vector <long long int> a;
        for (int i = 0; i < n; i++)
        {
            long long int x;
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        long long int ans = 0;
        for(int i = n-2; i>=0;i--){
            a[n-1]+=a[i];
            k--;
            if(k == 0){
                break;
            }
        }
        cout << a[n-1];
        cout << endl;
    }
    return 0;


}
