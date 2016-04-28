#include <cstdio>
char s[100000];
int a[26],ans[26][26];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;++i){
		scanf("%s",s);
		for(int i=0;i<26;++i)a[i]=0;
		for(int i=0;s[i]!='\0';++i){
			a[s[i]-'a']++;
		}
		int tmp=0,x,y;
		for(int i=0;i<26;++i){
			if(a[i]){
				tmp++;
				x=y;
				y=i;
			}
		}
		if(tmp==1){
			for(int i=0;i<26;++i){
				ans[y][i]+=a[y];
				if(i!=y)ans[i][y]+=a[y];
			}
		}else if(tmp==2){
			ans[x][y]+=(a[x]+a[y]);
			ans[y][x]+=(a[x]+a[y]);
		}


	}
	int max=0;
	for(int i=0;i<26;++i)for(int j=i;j<26;++j){
		if(max<ans[i][j])max=ans[i][j];
	}
	printf("%d\n",max);

	return 0;
}
