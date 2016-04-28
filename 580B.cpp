#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
struct p{
	int m,s;
	p(){}
	p(int mi,int si){m=mi;s=si;}
	bool operator<(const p &B)const{
		return m<B.m;
	}
}a[100010];
int main(){
	int n,d;
	scanf("%d %d",&n,&d);
	for(int i=0;i<n;++i){
		scanf("%d %d",&a[i].m,&a[i].s);
	}
	sort(a,a+n);
	long long ans=0,sum=0;
	int tmp=0;
	for(int i=0;i<n;++i){
		while(tmp<n&&a[tmp].m-a[i].m<d){
			sum+=a[tmp].s;
			tmp++;
		}
		ans=max(ans,sum);
		if(tmp==n)break;
		sum-=a[i].s;
	}
	printf("%I64d\n",ans);
	return 0;
}
