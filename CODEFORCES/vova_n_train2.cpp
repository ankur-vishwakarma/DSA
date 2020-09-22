#include<iostream>
using namespace std;
main(){
int t;
cin>>t;
int s[t][4];
for(int i=0;i<t;i++) cin>>s[i][0]>>s[i][1]>>s[i][2]>>s[i][3];
for(int i=0;i<t;i++){
int k=s[i][0]/s[i][1];
int p=(s[i][3]-s[i][2]+s[i][1])/s[i][1];
cout<<k-p<<"\n";
}
}
