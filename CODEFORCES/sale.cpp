#include<iostream>
using namespace std;
main(){
int n,m;
cin>>n>>m;
int s[n];
for(int i=0;i<n;i++) cin>>s[i];
for(int i=0;i<n;i++) for(int j=i+1;j<n;j++) if(s[i]>s[j]){
int temp=s[i];
s[i]=s[j];
s[j]=temp;
}
int sum=0;
for(int i=0;i<m;i++){
if(s[i]>0) break;
else sum+=s[i];
}
cout<<-sum;
}





