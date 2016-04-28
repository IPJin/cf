#include <cstdio>
#include <algorithm>
using namespace std;
char s[100010];
int dp[2][3];
int n;
int main(){
	scanf("%d",&n);
	scanf("%s",s);
	dp[0][0]=1;
	dp[0][1]=1;
	dp[0][2]=1;
	int pre=(s[0]=='1'),k;
	for(int i=1;i<n;++i){
		k=s[i]=='1';
		
		dp[i&1][0]=dp[(i+1)&1][0]+int(k!=pre);
		dp[i&1][1]=max(dp[(i+1)&1][0]+int(k==pre),dp[(i+1)&1][1]+int(k!=pre));
		dp[i&1][2]=max(dp[(i+1&1)][1]+int(k==pre),dp[(i+1)&1][2]+int(k!=pre));
		pre=k;
	}
	printf("%d\n",dp[(n-1)&1][2]);
	return 0;
}
