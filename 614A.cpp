#include <cstdio>
#include <vector>
using namespace std;
vector<unsigned long long> ans;
int main(){
	unsigned long long l,r,k,tmp;
	scanf("%I64u %I64u %I64u",&l,&r,&k);
	tmp=1;
	while(tmp<=r){
		if(tmp>=l)ans.push_back(tmp);
		if(r/k<tmp)break;
		tmp*=k;
	}
	if(ans.empty()){
		printf("-1\n");
	}else{
		for(int i=0;i<(int)ans.size();++i){
	if(i)printf(" ");
			printf("%I64u",ans[i]);
		}
		printf("\n");
	}
	return 0;
}
