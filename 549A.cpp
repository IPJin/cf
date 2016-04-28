#include <cstdio>
char ch;
int a[100][100];
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;++i)for(int j=0;j<m;++j){
		scanf("%c",&ch);
		if(ch=='f')a[i][j]=1;
		else if(ch=='a')a[i][j]=2;
		else if(ch=='c')a[i][j]=4;
		else if(ch=='e')a[i][j]=8;
		else if(ch>'z'||ch<'a')j--;
		else a[i][j]=0;
	}
	int ans=0;
	for(int i=0;i<n-1;++i){
		for(int j=0;j<m-1;++j){
			if(a[i][j]+a[i+1][j]+a[i][j+1]+a[i+1][j+1]==15)ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
}	
