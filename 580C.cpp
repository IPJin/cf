#include <cstdio>
#include <vector>
#include <queue>
using namespace std;
int a[100001];
int n,m,ans;
bool vis[100001];
vector<int> v[100001];
void dfs(int now,int d){
	vis[now]=1;
	if(d==m+1)return ;
	for(int i=0;i<(int)v[now].size();++i){
		if(!vis[v[now][i]]){
			dfs(v[now][i],a[v[now][i]]?d+1:0);
		}
	}
	if((int)v[now].size()==1&&now!=1)ans++;
}
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;++i){
		scanf("%d",&a[i]);
	}
	ans=0;
	int x,y;
	for(int i=0;i<n-1;++i){
		scanf("%d %d",&x,&y);	
		v[x].push_back(y);
		v[y].push_back(x);
	}
	dfs(1,a[1]);
	printf("%d\n",ans);
	return 0;
}
