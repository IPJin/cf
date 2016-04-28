#include <cstdio>
bool a[1010][2];
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int x;
	for(int i=0;i<n;++i){
		scanf("%d",&x);
		for(int j=1;j<m;++j){
			if(a[j][(i+1)&1]||a[(j+x)%m][(i+1)&1])
				a[(j+x)%m][i&1]=1;
		}
		a[x%m][i&1]=1;
		if(a[0][i&1]){
			puts("YES");
			return 0;
		}
	}
	puts("NO");
	return 0;
}
