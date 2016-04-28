#include <cstdio>
int main(){
	int n,m,n2,m2;
	scanf("%d %d",&n,&m);
	scanf("%d %d",&n2,&m2);
	int x,a,b;
	for(int i=0;i<n;++i){
		scanf("%d",&x);
		if(i==n2-1)a=x;
	}
	for(int i=0;i<m;++i){
		scanf("%d",&x);
		if(i==m-m2)b=x;
	}
	puts(a<b?"YES":"NO");
	return 0;
}
