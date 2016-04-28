#include <cstdio>
#include <vector>
using namespace std;
vector<int> ans;
int a[55][2];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n*n;++i){
		int x,y;
		scanf("%d %d",&x,&y);
		if(!a[x][0]&&!a[y][1]){
			a[x][0]=1;
			a[y][1]=1;
			ans.push_back(i+1);
		}
	}
	for(int i=0;i<(int)ans.size();++i){
		printf("%d%c",ans[i],i==(int)ans.size()-1?'\n':' ');
	}
	return 0;
}
