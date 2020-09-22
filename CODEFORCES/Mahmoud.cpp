#include<iostream>
#include<string>
using namespace std;
main(){
string s,t;
cin>>s>>t;
int ls=0,lt=0;
for(int i=0;s[i]!='\0';i++) ls++;
for(int i=0;t[i]!='\0';i++) lt++;
int max=0,count=1,flag=0,h=0;
if(ls>lt) max=ls-lt;
else max=lt-ls;
for(int i=0;i<lt&&i<ls;i++){
if(s[i]!=t[i]){
count++;
flag=1;
h=1;
}
if(count>max) max=count;
if(flag!=1) count=1;
flag=0;
}
if(h!=1) cout<<"-1";
else cout<<max;
}

