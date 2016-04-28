#include <cstdio>
using namespace std;
int main(){
	int n,min=-1,x,k=0;
	long long ans=0;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&x);
		ans+=x;
		if(x&1){
			k++;
			if(min>x||min==-1)min=x;
		}
	}
	if(k&1)ans-=min;
	printf("%I64d\n",ans);
}
