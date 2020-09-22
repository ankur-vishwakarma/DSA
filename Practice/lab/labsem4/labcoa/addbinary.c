#include<stdio.h>
int main(){
int a,b;
printf("enter two nos");
scanf("%d%d",&a,&b);
int a1[100]={0},b1[100]={0},l1=0,l2=0;
for(int i=0;a!=0;i++) a1[i]=a%2,a/=2,l1++;
for(int i=0;b!=0;i++) b1[i]=b%2,b/=2,l2++;
int max=l1,carry=0,c[100]={0};
if(l2>l1) max=l2;
for(int i=0;i<max;i++){
int sum=a1[i]+b1[i]+carry;
if(sum==0) c[i]=0,carry=0;
else if(sum==1) c[i]=1,carry=0;
else if(sum==2) c[i]=0,carry=1;
else c[i]=1,carry=1;
}
if(carry==1) c[max]=1,max++;
printf("the binary sum of above two numbers is=");
for(int i=max-1;i>=0;i--) printf("%d",c[i]);
return 0;
}




