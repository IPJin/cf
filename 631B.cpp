#include <cstdio>
int n,m,k;
struct l{
	int id,ver;
	l(){}
	l(int idi,int veri){id=idi;ver=veri;}
}a[2][5010];
int main(){
	int n,m,k;
	scanf("%d %d %d",&n,&m,&k);
	for(int i=1;i<=k;++i){
		int x,y,z;
		scanf("%d %d %d",&x,&y,&z);
		x--;y--;
		a[x][y]=l(z,i);
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			printf("%d%c",(a[0][i].ver>a[1][j].ver)?(a[0][i].id):(a[1][j].id),j==m-1?'\n':' ');

		}
	}

}
