#include<iostream>
#include<string>
using namespace std;
main(){
string s,t;
cin>>s>>t;
int ls=0,lt=0;
for(int i=0;s[i]!='\0';i++) ls++;
for(int i=0;t[i]!='\0';i++) lt++;
if(lt>ls) cout<<lt;
else if(ls>lt) cout<<ls;
else{
int flag=0;
for(int i=0;i<lt&&i<ls;i++){
 if(s[i]!=t[i]) {
flag=1;
}}
if(flag!=1) cout<<"-1";
else cout<<lt;
}
}

