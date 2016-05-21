#include <cstdio>
int a[100010],st[100010][2];
int st_n;
long long ans[100010],fans;
long long find(int now,int x){
	int l=-1,r=st_n;
	while(l+1<r){
		int mid=(l+r+1)/2;
		if(st[mid][0]>x){
			l=mid;
		}else{
			r=mid;
		}
	}
	long long tmp=ans[st[r][0]]-(x-st[r][0]);
	while(st_n&&st[st_n-1][1]<=x){
		st_n--;
	}
	st[st_n][0]=now;
	st[st_n++][1]=x;
	return tmp;
}
int main(){
	int n;
	scanf("%d",&n);
	st_n=1;
	st[0][0]=n;
	st[0][1]=n;

	for(int i=1;i<n;++i){
		scanf("%d",&a[i]);
	}
	fans=0;
	for(int i=n-1;i>0;--i){
		ans[i]=find(i,a[i])+n-i;		
		fans+=ans[i];
	}
	printf("%I64d\n",fans);
	return 0;
}
