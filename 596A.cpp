#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	int n;
	int xmax=-1000,xmin=1000,ymin=1000,ymax=-1000;
	scanf("%d",&n);
	for(int i=0;i<n;++i){
		int x,y;
		scanf("%d %d",&x,&y);
		xmax=max(x,xmax);
		xmin=min(x,xmin);
		ymax=max(y,ymax);
		ymin=min(y,ymin);
	}
	if(xmax==xmin||ymax==ymin)printf("-1\n");
	else printf("%d\n",(xmax-xmin)*(ymax-ymin));
	return 0;
}
