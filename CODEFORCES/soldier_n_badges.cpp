#include<iostream>
using namespace std;
main(){
int n;
cin>>n;
int s[n],coin=0,hold=0;
for(int i=0;i<n;i++) cin>>s[i];
for(int i=0;i<n;i++) for(int j=i+1;j<n;j++) if(s[i]>s[j]){
int tmp=s[i];
s[i]=s[j];
s[j]=tmp;
}
int flag,count=1;
for(int i=0;i<n-1;i++){
if(hold==1) for(int j=i;j<n;j++){
 s[j]+=flag;
cout<<s[j]<<" ";
}
hold=0,count=1;
for(int j=i+1;j<n;j++){
if(s[i]==s[j]){
s[j]+=count;
count++;
hold=1;
}
}
coin+=count;
}
cout<<count;
}
