#include <cstdio>
char s[10];
int main(){
	int n;
	scanf("%d %*s %s",&n,s);
	if(s[0]=='w'){
		if(n==5||n==6)printf("53\n");
		else printf("52\n");
	}else{
		if(n<30)printf("12\n");
		else if(n==30)printf("11\n");
		else printf("7\n");
	}
		return 0;
}
