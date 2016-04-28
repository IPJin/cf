#include <cstdio>
#include <algorithm>
using namespace std;
char s[1000000];
int a[30],b[30];
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	scanf("%s",s);
	for(int i=0;i<26;++i)a[i]=i;
	while(m--){
		char x,y;
		scanf(" %c %c",&x,&y);
		swap(a[x-'a'],a[y-'a']);
	}
	for(int i=0;i<26;++i)b[a[i]]=i;
	for(int i=0;i<n;++i){
		printf("%c",b[s[i]-'a']+'a');
	}
	printf("\n");
}
