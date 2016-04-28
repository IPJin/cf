#include <cstdio>
#include <queue>
using namespace std;
priority_queue<int> pq;
int main(){
	int n,x,flag=0,s=0;
	scanf("%d",&n);
	for(int i=0;i<2*n-1;++i){
		scanf("%d",&x);
		if(x>0){
			s++;
			pq.push(x);
		}else if (x<0){
			pq.push(-x);
		}else flag=1;
	}
	if(n&1)flag=1;
	if((2*n-1-s)%2==0)flag=1;
	int ans=0;
	if(flag){
		while(!pq.empty()){
			ans+=pq.top();pq.pop();
		}
	}else{
		while(pq.size()!=1){
			ans+=pq.top();pq.pop();
		}
		ans-=pq.top();pq.pop();
	}
	printf("%d\n",ans);
	return 0;
}
