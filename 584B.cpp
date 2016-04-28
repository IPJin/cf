#include <cstdio>
#define MOD 1000000007ll
int main(){
	long long a=1ll,b=1ll;
	int n;
	scanf("%d",&n);
	while(n--){
		a=(a*27ll)%MOD;
		b=(b*7ll)%MOD;
	}
	printf("lld\n",(a-b+MOD)%MOD);
}
