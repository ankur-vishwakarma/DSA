#include<bits/stdc++.h>
using namespace std;
main(){
string s;
int flag=0;
cin>>s;
for(int i=0;i<s.length()-1;i++){
if(s[i]=='0'){ flag=i+1; break;}
 cout<<s[i];
 }
if(flag!=0) for(int i=flag;i<s.length();i++) cout<<s[i];
} 
