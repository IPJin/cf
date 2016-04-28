#include <cstdio>
int a[1010];
int main(){
	int n,ans;
	scanf("%d",&n);
	ans=n-1;
	int x,top=1;
	for(int i=0;i<n;++i){
		scanf("%d",&x);
		a[x]++;
		if(a[x]>top){
			top++;ans--;
		}
	}		
	printf("%d\n",ans);
}
