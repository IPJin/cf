#include <cstdio>
struct book{
	int a[100][2];
	int n,lim;
	bool k;
	void init(int l,bool k_){n=0;lim=l;k=k_;}
	void insert(int x,int y){
		for(int i=0;i<n;++i){
			if((x>a[i][0]&&(!k))||(x<a[i][0]&&(k))){
				for(int j=lim-1;j>i;j--){
					a[j][0]=a[j-1][0];
					a[j][1]=a[j-1][1];
				}
				a[i][0]=x;
				a[i][1]=y;
				if(n<lim)n++;
				return ;
			}else if(x==a[i][0]){
				a[i][1]+=y;
				return ;
			}
		}
		if(n<lim){
			a[n][0]=x;
			a[n][1]=y;
			n++;
			return ;
		}
	}
	void show(){
		for(int i=0;i<n;++i){
			printf("%c %d %d\n",k?'S':'B',a[k?n-i-1:i][0],a[k?n-i-1:i][1]);
		}
	}
}B,S;
int main (){
	int n,m;
	char ch[10];
	scanf("%d %d",&n,&m);
	B.init(m,false);
	S.init(m,true);
	for(int i=0;i<n;++i){
		int x,y;
		scanf("%s %d %d",ch,&x,&y);
		if(ch[0]=='B'){
			B.insert(x,y);
		}else{
			S.insert(x,y);
		}
	}
	S.show();
	B.show();

}
