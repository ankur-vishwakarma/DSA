#include<iostream>
using namespace std;
main(){
int r,c;
cin>>r>>c;
char s[r][c];
for(int i=0;i<r;i++) for(int j=0;j<c;j++) cin>>s[i][j];
int k[r][2];
int n=0;
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
if(s[i][j]=='S'){
k[n][0]=i,k[n][1]=j;
n++;
}}}
for(int i=0;i<n;i++) cout<<k[i][0]<<" "<<k[i][1]<<"\n";
int count=0;
for(int i=0;i<n;i++){
for(int j=i+1;i<n;i++){
if(k[i][0]==k[j][1]) count++;
}}
cout<<count;
}
