#include <cstdio>
char a[100010],b[100010],ans[100010];
char dif(char x,char y){
	if(x!='a'&&y!='a')return 'a';
	if(x!='b'&&y!='b')return 'b';
	return 'c';
}
int main(){
	int n,t,cnt=0;
	scanf("%d %d",&n,&t);
	t=n-t;
	scanf("%s %s",a,b);
	for(int i=0;i<n;++i){
		if(a[i]==b[i])cnt++;
	}
	if(cnt+n<2*t){
		printf("-1\n");
		return 0;
	}
	int as,bs,als;
	if(cnt>t){
		as=bs=0;
		als=t;
	}else {
		as=bs=t-cnt;
		als=cnt;
	}
	for(int i=0;i<n;++i){
		if(a[i]==b[i]){
			if(als){
				ans[i]=a[i];
				als--;
			}else{
				ans[i]=dif(a[i],b[i]);
			}
		}else{
			if(as){
				ans[i]=a[i];as--;
			}else if(bs){
				ans[i]=b[i];bs--;
			}else{
				ans[i]=dif(a[i],b[i]);
			}	
		}
	}
	ans[n]='\0';
	printf("%s\n",ans);
}
