#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	int n;
	long long pre=0,ans=0;
	scanf("%d",&n);
	for(int i=0;i<n;++i){
		int x;
		scanf("%d",&x);
		ans+=abs(pre-(long long)x);
		pre=x;
	}
	printf("%lld\n",ans);
	return 0;
}
