#include <cstdio>
#include <algorithm>
using namespace std;
double check(double a,double b){
	if(a<b||a<=0)return 1e10;
	double ret;
	int tmp;
	tmp=a/(b*2);
	ret=a/tmp/2;
	return ret;
}
int main(){
	double n,m;
	scanf("%lf %lf",&n,&m);
	if(m>n){
		printf("-1\n");
		return 0;
	}
	double ans=min(check(n+m,m),check(n-m,m));
	printf("%.12f\n",ans);
	return 0;
}
