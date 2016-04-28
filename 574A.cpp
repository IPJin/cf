#include <cstdio>
#include <queue>
using namespace std;
priority_queue<int> pq;
int main(){
	int n,ans=0;
	scanf("%d",&n);
	int x,y;
	scanf("%d",&x);
	for(int i=1;i<n;++i){
		scanf("%d",&y);
		pq.push(y);
	}
	while(x<=pq.top()){
		x++;
		pq.push(pq.top()-1);
		pq.pop();
		ans++;
	}
	printf("%d\n",ans);
	return 0;
}

