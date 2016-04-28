#include <cstdio>
#include <algorithm>
using namespace std;
int a[2][20],n;
int mid(int a,int b,int c){
	int ret=a+b+c;
	ret-=max(a,max(b,c));
	ret-=min(a,min(b,c));
	return ret;
}
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;++i){
		scanf("%d",&a[0][i]);

	}
	a[1][0]=a[0][0];
	a[1][n-1]=a[0][n-1];
	int tmp=1;
	while(1){
		for(int i=1;i<n-1;++i){
			a[tmp&1][i]=mid(a[(tmp-1)&1][i-1],a[(tmp-1)&1][i],a[(tmp-1)&1][i+1]);
		}
		printf("%d\n",tmp);
		for(int i=0;i<n;++i)printf("%d ",a[tmp&1][i]);
		printf("\n");
		tmp++;
		int flag=0;
		for(int i=0;i<n;++i){
			if(a[0][i]!=a[1][i])flag=1;
		}
		if(!flag)break;

	}
}
