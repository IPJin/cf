#include <cstdio>
long long ans;
void solve(){
	long long n,tmp=1;
	ans=0;
	scanf("%lld",&n);
	ans+=((1+n)*n)/2;
	while(tmp<=n){
		ans-=(tmp<<1);
		tmp<<=1;
	}
	printf("%lld\n",ans);
}
int main(){
	int T;
	scanf("%d",&T);
	while(T--)solve();
	return 0;
}
