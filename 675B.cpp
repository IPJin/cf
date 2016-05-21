#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	long long n,a,b,c,d,minx,maxx;
	scanf("%lld %lld %lld %lld %lld",&n,&a,&b,&c,&d);
	minx=min(min(b-c,a-d),min(a+b-c-d,0ll));
	maxx=max(max(b-c,a-d),max(a+b-c-d,0ll));
	long long  rg=maxx-minx+1;
	if(rg>n){
		printf("0\n");
	}else{
		printf("%lld\n",(n-rg+1)*n);

	}
}
