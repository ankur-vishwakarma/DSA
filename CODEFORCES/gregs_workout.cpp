#include<iostream>
using namespace std;
main(){
int n;
cin>>n;
int s[n];
for(int i=0;i<n;i++) cin>>s[i];
int ch=0,bi=0,b=0;
for(int i=0;i<n;i+=3) ch+=s[i];
for(int i=1;i<n;i+=3) bi+=s[i];
for(int i=2;i<n;i+=3) b+=s[i];
if(ch>bi&&ch>b) cout<<"chest";
else if(bi>ch&&bi>b) cout<<"biceps";
else cout<<"back";
}


