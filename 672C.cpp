#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
typedef long long ll;
double ans,mx[2][2];
int ax[2],ay[2],tx,ty,mxn[2];
double dist(ll x1,ll y1,ll x2,ll y2){
	double ret=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	return sqrt(ret);
}
int main(){
	scanf("%d %d %d %d %d %d",&ax[0],&ay[0],&ax[1],&ay[1],&tx,&ty);
	int n;
	mx[0][1]=mx[1][1]=1e10;
	mx[0][0]=mx[1][0]=0;
	scanf("%d",&n);
	mxn[0]=mxn[1]=-1;;
	for(int i=0;i<n;++i){
		int x,y;
		scanf("%d %d",&x,&y);
		double tmp1;
		tmp1=dist((ll)tx,(ll)ty,(ll)x,(ll)y);
		for(int j=0;j<2;++j){
			double tmp2;
			tmp2=dist((ll)ax[j],(ll)ay[j],(ll)x,(ll)y);
			tmp2-=tmp1;
			if(tmp2<=mx[j][0]){
				mxn[j]=i;
				mx[j][1]=mx[j][0];
				mx[j][0]=tmp2;
			}else if(tmp2<mx[j][1]){
				mx[j][1]=tmp2;
			}
		}
		ans+=tmp1*2;
	}
	if(mxn[0]==mxn[1]){
		ans+=min(mx[0][1]+mx[1][0],mx[1][1]+mx[0][0]);
	}else{
		ans+=(mx[0][0]+mx[1][0]);
	}
	printf("%.10lf",ans);

}
