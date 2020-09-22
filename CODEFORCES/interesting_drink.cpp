#include<iostream>
using namespace std;
main(){
int n;
cin>>n;
int s[n],i;
for(i=0;i<n;i++) cin>>s[i];
int q;
cin>>q;
int m[q];
for(i=0;i<q;i++) cin>>m[i];
for(i=0;i<n;i++){
for(int j=i+1;j<n;j++){
if(s[i]<s[j]){
int temp=s[i];
s[i]=s[j];
s[j]=temp;
}}}
for(i=0;i<q;i++){
int count=0,j;
for(j=0;j<n;j++) if(m[i]>=s[j]) break;
count=n-j;
cout<<count<<"\n";
}
}
