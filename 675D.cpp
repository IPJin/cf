#include <cstdio>
#include <map>
using namespace std;
map<int,int> a;
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;++i){
		int x,ans;
		scanf("%d",&x);
		a[x]=i;
		if(!i)continue;
		auto f=a.find(x);
		if(f==a.begin()){
			f++;
			ans=f->first;
		}else{
			auto fp=f;
			fp--;f++;
			if(f==a.end()||fp->second>f->second){
				ans=fp->first;
			}else{
				ans=f->first;
			}
		}
		if(i>1)printf(" ");
		printf("%d",ans);
	}	
	printf("\n");

}
