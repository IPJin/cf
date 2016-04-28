#include <cstdio>
char s[2][10010];
int main(){
	scanf("%s",s[0]);
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;++i){
		int l,r,k;
		scanf("%d %d %d",&l,&r,&k);
		for(int j=0;j<l-1;++j){
			s[(i+1)&1][j]=s[i&1][j];
		}
		for(int j=l-1;j<r;++j){
			s[(i+1)&1][j]=s[i&1][(j-k<l-1)?(r+j+1-l-k):(j-k)];
		}
		for(int j=r;s[0][j]!='\0';++j){
			s[(i+1)&1][j]=s[i&1][j];
		}
	}
	printf("%s\n",s[n&1]);
	return 0;
}
