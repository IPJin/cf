#include <cstdio>
int main(){
	int n,x;
	scanf("%d %d",&n,&x);
	int ans=0;
	for(int i=1;i<=n;++i){
		if(x%i==0&&x/i<=n)ans++;
	}
	printf("%d\n",ans);


}
