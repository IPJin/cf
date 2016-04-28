#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
struct p{
	int x,y;
	p(){}
	p(int _x,int _y){x=_x;y=_y;}
};
vector<p> v,ans;
bool comp(p A,p B){
	return A.y<B.y;
}
int ansv;
int a[2020],b[2020],done[2020];
void solve(int k){
	int tmp=a[k];
	while(tmp!=k){
		v.push_back(p(a[tmp],tmp));
		done[tmp]=1;
		tmp=a[tmp];
	}
	done[tmp]=1;
	v.push_back(p(a[tmp],tmp));
	sort(v.begin(),v.end(),comp);
	for(int i=0;i<(int)v.size()-1;++i){
		if(v[i].x>v[i].y&&v[i+1].x<v[i+1].y){
			ans.push_back(p(v[i].y,v[i+1].y));
			swap(v[i].x,v[i+1].x);
			ansv+=abs(v[i].y-v[i+1].y);
			if(v[i].y==v[i].x&&v[i+1].y==v[i+1].x){
				for(int j=i;j<(int)v.size()-2;++j){
					v[j]=v[j+2];
				}
				v.pop_back();
				v.pop_back();
			}else if(v[i].x==v[i].y||v[i+1].x==v[i+1].y){
				for(int j=i+(v[i+1].x==v[i+1].y);j<(int)v.size()-1;++j){
					v[j]=v[j+1];
				}
				v.pop_back();
			}
			if(i)i-=2;
			else i--;
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;++i)scanf("%d",&a[i]);
	for(int i=0;i<n;++i){
		int x;
		scanf("%d",&x);
		b[x]=i;
	}
	for(int i=0;i<n;++i){
		a[i]=b[a[i]];
	}
	for(int i=0;i<n;++i){
		if(a[i]!=i&&!done[i])solve(i);
	}
	printf("%d\n%d\n",ansv,(int)ans.size());
	for(int i=0;i<(int)ans.size();++i){
		printf("%d %d\n",ans[i].x+1,ans[i].y+1);
	}
	return 0;
}
