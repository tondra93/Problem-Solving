#include <bits/stdc++.h>

using namespace std;;

int main(){

	int t;
	cin>>t;

	while (t--) {
		int n,k;
		cin>>n>>k;
		int x=n;
		for (int i=1;i*i<=n;i++){
			if (n%i==0){
				if (i<=k) x=min(x,n/i);
				if (n/i<=k) x=min(x,i);
			}
		}
		cout<<x<<endl;
	}

	return 0;
}


