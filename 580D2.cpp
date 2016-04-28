#include <cstdio>
#include <algorithm>
using namespace std;
int n,m,k,x,y;
long long z,ans,a[20],l[20][20],dp[1000000][20];
int main(){
	scanf("%d %d %d",&n,&m,&k);
	for(int i=0;i<n;++i)scanf("%lld",&a[i]);
	while(k--){
		scanf("%d %d %lld",&x,&y,&z);
		x--;y--;
		l[x][y]=z;
	}
	int c;
	ans=0;
	for(int i=1;i<(1<<n);++i){
	 	c=0;
		for(int j=0;j<n;++j){
			if(i&(1<<j))c++;
		}
		if(c>m)continue;
		for(int j=0;j<n;++j){
			if(i&(1<<j)){
				if(c==1){
					dp[i][j]=a[j];
				}else{
					for(int q=0;q<n;++q){
						if(i&(1<<q)&&q!=j)dp[i][j]=max(dp[i][j],dp[i-(1<<j)][q]+a[j]+l[j][q]);
					}
				}
				if(c==m)ans=max(ans,dp[i][j]);
			}
		}
	}
	printf("%lld\n",ans);
	return 0;
}
