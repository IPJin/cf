#include <cstdio>
#include <algorithm>
using namespace std;
int dp[220][220];
int d(int x,int y){
	if(x<=0||y<=0)return 0;
	if(x==1&&y==1)return 0;
	return dp[x][y];
}
int main(){
	for(int i=0;i<=400;++i){
		for(int j=max(0,i-200);j<=i&&j<=200;++j){
			if((i-j)&&j)dp[i-j][j]=max(d(i-j+1,j-2),d(i-j-2,j+1))+1;
		}
	}
	int x,y;
	scanf("%d %d",&x,&y);
	printf("%d\n",d(x,y));
}
