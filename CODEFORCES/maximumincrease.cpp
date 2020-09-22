#include<iostream>
using namespace std;
main(){
int n;
cin>>n;
int s[n];
for(int i=0;i<n;i++) cin>>s[i];
int count=1,max=1,flag=0;
for(int i=0;i<n-1;i++){
if(s[i+1]>s[i]){
count++;
flag=1;
}
if(count>max) max=count;
if(flag!=1) count=1;
flag=0;
}
cout<<max;
}
