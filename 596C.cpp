#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
struct p{
	int x,y;
	p(){}
	p(int xi,int yi){
		x=xi;y=yi;
	}
};
int ans[100010];
bool comp(p A,p B){
	return A.y-A.x<B.y-B.x;
}
bool comp2(p A,p B){
	return A.x<B.x; 
}
vector<p> v,q;
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;++i){
		int x,y;
		scanf("%d %d",&x,&y);
		v.push_back(p(x,y));
	}
	sort(v.begin(),v.end(),comp);
	for(int i=0;i<n;++i){
		int x;
		scanf("%d",&x);
		q.push_back(p(x,i));
	}
	sort(q.begin(),q.end(),comp2);
	for(int i=0;i<n;++i){
		if(q[i].x!=v[i].y-v[i].x){
			printf("NO\n");
			return 0;
		}
		ans[q[i].y]=i;
	}
	printf("YES\n");
	for(int i=0;i<n;++i){
		printf("%d %d\n",v[ans[i]].x,v[ans[i]].y);

	}
}
