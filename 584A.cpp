#include <cstdio>
int main(){
	int n,t;
	scanf("%d %d",&n,&t);
	if(n==1&&t==10){
		printf("-1\n");
		return 0;
	}
	printf("%d",t);
	if(t==10)n-=2;
	else n--;
	while(n--)printf("0");
	printf("\n");
	return 0;
}
