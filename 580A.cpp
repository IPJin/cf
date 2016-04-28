#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	int ans=0,now=0,pre=0,x,n;
	scanf("%d",&n);
	for(int i=0;i<n;++i){
		scanf("%d",&x);
		if(x>=pre)now++;
		else now=1;
		pre=x;
		ans=max(ans,now);
	}
	printf("%d\n",ans);
	return 0;
}
