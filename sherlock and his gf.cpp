#include<cstdio>
const int m=1e5+10;

bool f[m];

int main(){

	int x;
	scanf("%d",&x);
	f[0]=f[1]=1;

	for(int i=2;i*i<=x+1;i++){
		if(!f[i]){
			for(int j=i*2;j<=x+1;j+=i){
				f[j]=1;
			}
		}
	}
	printf("%d\n",x<3?1:2);
	for(int i=2;i<=x+1;i++)printf("%d ",f[i]+1);

	return 0;
}
