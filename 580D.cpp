#include <cstdio>
#include <algorithm>
using namespace std;
int n,m,k,x,y;
bool dpd[1000000][18];
long long z,dp[1000000][18],a[20],l[20][20];
long long dfs(int d,int st,int pre){
	if(d==m)return 0;
	if(!dpd[st][pre]){
		dpd[st][pre]=1;
		for(int i=0;i<n;++i){
			if(st&(1<<i)){
				dp[st][pre]=max(dp[st][pre],l[pre][i]+dfs(d+1,st-(1<<i),i)+a[i]);
			}
		}
	}
	return dp[st][pre];
}
int main(){
	scanf("%d %d %d",&n,&m,&k);
	for(int i=0;i<n;++i)scanf("%lld",&a[i]);
	for(int i=0;i<k;++i){
		scanf("%d %d %lld",&x,&y,&z);
		x--;y--;
		l[x][y]=z;
	}
	printf("%lld\n",dfs(0,(1<<n)-1,n));
	return 0;
}
