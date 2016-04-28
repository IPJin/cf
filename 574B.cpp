#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
vector<int> v[4010];
int a[4010];
map<int,bool> check;
int main(){
	int n,m;
	int x,y;
	scanf("%d %d",&n,&m);
	for(int i=0;i<m;++i){
		scanf("%d %d",&x,&y);
		if(x>y)swap(x,y);
		v[x].push_back(y);
		a[x]++;
		a[y]++;
		check[n*x+y]=1;
	}
	int ans=4444;
	for(int i=1;i<=n;++i){

		for(int j=0;j<(int)v[i].size()-1;++j){
			for(int k=j+1;k<(int)v[i].size();++k){
				x=v[i][j];y=v[i][k];
				if(x>y)swap(x,y);
				if(check[n*x+y]){
					ans=min(ans,a[x]+a[y]+a[i]-6);
				}
			}
		}
	}
	if(ans==4444)ans=-1;
	printf("%d\n",ans);
	return 0;
}
