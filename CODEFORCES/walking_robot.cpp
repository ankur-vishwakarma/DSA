#include<iostream>
using namespace std;
main(){
int n,b,a;
cin>>n>>b>>a;
int s[n],d=0,amax=a;
for(int i=0;i<n;i++) cin>>s[i];
for(int i=0;i<n;i++){
if(a==0&&b==0){ cout<<d; return 0; }
if(s[i]==0){
if(a>0) a--,d++;
else if(b>0) b--,d++;
}
else{
if(a==amax) d++,a--;
else{
if(b>0){ b--,d++; if(a+1<=amax) a++; }
else if(a>0) a--,d++;
}}
}
cout<<d;
}
