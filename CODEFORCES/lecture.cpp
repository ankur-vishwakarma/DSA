#include<iostream>
#include<string>
using namespace std;
int len(string a){
int l=0;
for(int i=0;a[i]!='\0';i++) l++;
return l;
}
main(){
int n,m;
cin>>n>>m;
string s[m][2],t[n];
for(int i=0;i<m;i++) cin>>s[i][0]>>s[i][1];
for(int i=0;i<n;i++) cin>>t[i];
string res[m];
for(int i=0;i<m;i++){
if(len(s[i][0])>len(s[i][1])) res[i]=s[i][1];
else res[i]=s[i][0];
}
for(int i=0;i<n;i++){
int j=0;
while(s[j][0]!=t[i]) j++;
cout<<res[j]<<" ";
}
}




