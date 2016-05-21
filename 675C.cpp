#include <cstdio>
#include <algorithm>
using namespace std;
long long a[100010],pre[100010],suf[100010],st_pre[100010],st_suf[100010];
int main(){
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;++i){
		scanf("%lld",&a[i]);
	}
	for(int i=1;i<=n;++i){
		st_pre[i]=pre[i]=pre[i-1]+a[i-1];
		st_suf[n-i]=suf[n-i]=suf[n-i+1]+a[n-i];
	}
	sort(st_pre,st_pre+n);
	sort(st_suf,st_suf+n);
	int ans=1000000000;
	for(int i=0;i<n;++i){
		int tmp1,tmp2;
		tmp1=(int)(upper_bound(st_pre,st_pre+n,pre[i])-st_pre);
		tmp2=(int)(upper_bound(st_suf,st_suf+n,suf[i])-st_suf);
		ans=min(ans,n-tmp1+n-tmp2);
	}
	printf("%d\n",ans);
}
