#include <cstdio>
int main(){
	int n,x,tmp=0,tmp2=0;
	scanf("%d",&n);
	
	for(int i=0;i<n;++i){
		scanf("%d",&x);
		tmp|=x;
	}
	for(int i=0;i<n;++i){
		scanf("%d",&x);
		tmp2|=x;
	}	
	printf("%d\n",tmp+tmp2);

}
