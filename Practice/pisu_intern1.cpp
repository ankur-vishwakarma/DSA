#include<stdio.h>
#include<string.h>
main(){
	char a[100000],b[100000];
	scanf("%s%s",&a,&b);
	strcat(b,b);
	int flag=0;
	for(int i=0;i<strlen(b);i++){
		if(b[i]==a[0]){
			int j;
			for(j=0;j<strlen(a);j++) if(b[j+i]!=a[j]) break;
			if(j==strlen(a)){
				flag=1;
				break;
			}
		}
		if(flag) break;
	}
	if(flag) printf("1");
	else printf("-1");
}
