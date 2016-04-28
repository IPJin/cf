#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
struct l{
	long long a,b;
	l(){}
	l(long long a_,long long b_){a=a_;b=b_;}
};
vector<l> v;
int n;
long long x1,x2;
bool comp(l A,l B){
	if(A.a*x1+A.b==B.a*x1+B.b)return A.a<B.a;
	return A.a*x1+A.b<B.a*x1+B.b;
}
int main(){
	scanf("%d %lld %lld",&n,&x1,&x2);
	for(int i=0;i<n;++i){
		int a,b;
		scanf("%d %d",&a,&b);
		v.push_back(l(a,b));
	}
	sort(v.begin(),v.end(),comp);
	for(int i=0;i<n-1;++i){
		if(v[i].a*x2+v[i].b>v[i+1].a*x2+v[i+1].b){
			puts("YES");
			return 0;
		}
	}
	puts("NO");
	return 0;
}
