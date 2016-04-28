#include <cstdio>
#include <algorithm>
using namespace std;
int n,k,a[100010];
int main(){
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;++i){
		scanf("%d",&a[i]);
	}
	int c2;
	c2=n-k;
	if(c2<0){
		c2=0;
	}
	int ans=0;
	for(int i=0;i<c2;++i){
		ans=max(ans,a[i]+a[c2*2-i-1]);
	}
	for(int i=c2*2;i<n;++i){
		ans=max(ans,a[i]);
	}
	printf("%d\n",ans);
	return 0;
}

