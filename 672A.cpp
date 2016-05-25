#include <cstdio>
#include <vector>
using namespace std;
vector<int> v;
int main(){
	for(int i=1;i<1000;++i){
		if(i>=100)v.push_back(i/100);
		if(i>=10)v.push_back((i/10)%10);
		v.push_back(i%10);

	}
	int n;
	scanf("%d",&n);
	printf("%d\n",v[n-1]);
}
