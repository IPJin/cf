#include <cstdio>
long long nl(long long x){
	if(!(x&1)){
		return ((x+2)+(x+1)-(x+2)/2);
	}
	for(int i=0;;++i){
		if(!(x&(1ll<<i))){
			return x+(1ll<<i)-(1ll<<(i-1));
		}
	}
}
int main(){
	long long a,b;
	scanf("%I64d %I64d",&a,&b);
	long long tmp=a;
	int cnt=0;
	while(tmp){
		cnt++;
		tmp/=2;
	}
	long long l=2;
	int ans=0;
	while(l<a)l=nl(l);
	while(l<=b)ans++,l=nl(l);
	printf("%d\n",ans);
	return 0;
}
