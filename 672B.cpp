#include <cstdio>
int a[26],n;
char s[100010];
int main(){
	int n;
	scanf("%d",&n);
	scanf("%s",s);
	if(n>26){
		printf("-1\n");
		return 0;
	}
	for(int i=0;i<n;++i){
		a[s[i]-'a']++;
	}
	int ans=0;
	for(int i=0;i<26;++i){
		if(a[i])ans+=(a[i]-1);
	}
	printf("%d\n",ans);

}
