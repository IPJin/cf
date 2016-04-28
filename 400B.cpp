#include <cstdio>
#include <algorithm>
using namespace std;
int a[1010];
char s[1010];
int main(){
	int n,m,gl,sl,ans=0;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;++i){
		scanf("%s",s);
		for(int j=0;j<m;++j){
			if(s[j]=='G')gl=j;
			if(s[j]=='S')sl=j;
		}
		if(gl>sl){
			printf("-1\n");
			return 0;
		}
		if(!a[sl-gl]){
			ans++;
			a[sl-gl]=1;
		}
	}
	printf("%d\n",ans);


	return 0;
}
