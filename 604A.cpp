#include <cstdio>
int m[5],w[5],hs,hu;
int main(){
	for(int i=0;i<5;++i)scanf("%d",&m[i]);
	for(int i=0;i<5;++i)scanf("%d",&w[i]);
	scanf("%d %d",&hs,&hu);
	int ans=0;
	for(int i=1;i<=5;++i){
		int x=150*i;
		int y=(250-m[i-1])*2*i-50*w[i-1];
		ans+=(x>y?x:y);
	}
	ans+=(100*hs-50*hu);
	printf("%d\n",ans);
	return 0;
}
