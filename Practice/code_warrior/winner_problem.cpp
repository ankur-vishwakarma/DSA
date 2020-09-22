#include<iostream>
#include<string>
using namespace std;
main(){
int n;
cin>>n;
string s[n];
for(int i=0;i<n;i++) cin>>s[i];
long long r=73,d=51,rs=0,ds=0;
for(int i=0;i<n;i++){
int count=0;
for(int j=0;s[i][j]!='\0';j++) count+=(s[i][j]-96);
if(count==r) rs++;
else if(count==d) ds++;
}
if(ds>rs) cout<<"dheeraj";
else if(rs>ds) cout<<"ranjeet";
else cout<<"draw";
}

