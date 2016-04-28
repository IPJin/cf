#include <cstdio>
int t[2010][2];
int main(){
	int n,x,y;
	scanf("%d",&n);
	long long ans=0;
	for(int i=0;i<n;++i){
		scanf("%d %d",&x,&y);
		ans+=t[x+y][0];
		ans+=t[x-y+1000][1];
		t[x+y][0]++;
		t[x-y+1000][1]++;
	}
	printf("%lld\n",ans);
	return 0;
}
