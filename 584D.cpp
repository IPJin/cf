#include <cstdio>
long long c[3]={2ll,7ll,61ll};
long long power(long long x,long long p,long long mod){
	long long s=1,m=x;
	while(p) {
		if(p&1) s=(s*m)%mod;
		p>>=1;
		m=(m*m)%mod;
	}
	return s;
}
bool witness(long long a,long long n,long long u,int t){
	long long x=power(a,u,n);
	for(int i=0;i<t;i++) {
		long long nx=(x*x)%n;
		if(nx==1&&x!=1&&x!=n-1) return 1;
		x=nx;
	}
	return x!=1;
}
bool miller_rabin(long long n) {
	if(n<2) return 0;
	if(!(n&1)) return n==2;
	long long u=n-1;
	int t=0;
	while(u&1) {
		u>>=1;
		t++;
	}
	for(int i=0;i<3;++i){
		long long a=c[i];
		if(witness(a,n,u,t)) return 0;
	}
	return 1;
}
long long p[10]={2ll,3ll,5ll,7ll,11ll,13ll,17ll,19ll,23ll,29ll};
int main(){
	long long n;
	scanf("%lld",&n);
	if(miller_rabin(n)){
		printf("1\n%lld\n",n);
		return 0;
	}
	long long tmp;
	if(n&1)tmp=n-2ll;
	else tmp=n-1ll;
	while(tmp>0){
		if(miller_rabin(tmp)){
			if(miller_rabin(n-tmp)){
				printf("2\n%lld %lld\n",tmp,n-tmp);
				return 0;
			}
			for(int i=0;i<10;++i){
				if(miller_rabin(n-tmp-p[i])){
					printf("3\n%lld %lld %lld\n",tmp,n-tmp-p[i],p[i]);
					return 0;
				}
			}

		}
		tmp-=2;
	}
	
}
