#include<stdio.h>
main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n],b[n];
	int mapa[100000]={};
	int mapb[100000]={};
	for(int i=0;i<n;i++) scanf("%d",&a[i]),mapa[a[i]]=1;
	for(int i=0;i<m;i++) scanf("%d",&b[i]),mapb[b[i]]=1;
	int count=0;
	for(int i=0;i<n;i++){
		if(!mapb[a[i]]) count++;
	}
	for(int i=0;i<m;i++){
		if(!mapa[b[i]]) count++;
	}
	printf("%d",count);
}
