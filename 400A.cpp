#include <cstdio>
#include <vector>
using namespace std;
char s[20];
vector<int> ans;
void solve(){
	scanf("%s",s);
	ans.clear();
	for(int i=1;i<=12;++i){
		if(12%i)continue;
		for(int j=0;j<12/i;++j){
			bool flag=1;
			for(int k=0;k<i;++k){
				if(s[j+k*12/i]!='X')flag=0;
			}
			if(flag){
				ans.push_back(i);
				break;
			}
		}
	}
	printf("%d",(int)ans.size());
	for(int i=0;i<(int)ans.size();++i){
		printf(" %dx%d",ans[i],12/ans[i]);
	}
	printf("\n");
}
int main(){
	int T;
	scanf("%d",&T);
	while(T--)solve();
	return 0;
}
