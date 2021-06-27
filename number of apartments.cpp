#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while (t--){
		int n;
		cin>>n;
		if (n==4 or n==1 or n==2){
			cout<<-1<<'\n';
			continue;
		}
		if (n%3==0){
			cout<<n/3<<" 0 0\n";
			continue;
		}
		if (n%3==1){
			cout<<(n-7)/3<<" 0 1\n";
			continue;
		}
		if (n%3==2){
			cout<<(n-5)/3<<" 1 0\n";
			continue;
		}
	}
	return 0;
}
