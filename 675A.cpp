#include <cstdio>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int goal=b-a;
	
	if(!goal||(c&&goal%c==0&&goal/c>=0)){
		printf("YES\n");
	}else{
		printf("NO\n");
	}

	return 0;
}
