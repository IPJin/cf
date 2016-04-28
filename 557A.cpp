#include <cstdio>
#include <algorithm>
using namespace std;
int n,l[3],r[3],ans[3];
int main(){
	scanf("%d",&n);
	for(int i=0;i<3;++i)scanf("%d %d",&l[i],&r[i]);
	ans[0]=min(r[0],n-l[1]-l[2]);
	n-=ans[0];
	ans[1]=min(r[1],n-l[2]);
	n-=ans[1];
	ans[2]=n;
	printf("%d %d %d\n",ans[0],ans[1],ans[2]);
	return 0;
}
