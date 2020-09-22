#include<iostream>
using namespace std;

main(){
int n;
cin>>n;
int s[n];
for(int i=0;i<n;i++) cin>>s[i];
int total=0;
for(int i=0;i<n;i++){
if(s[i]>=0){
int j=i+1,cs=0;
while(s[j]<s[i]&&j<n) cs+(s[i]-s[j]),j++;
if(s[j]>=s[i]) total+=cs;
i=j;
}}
cout<<total;
}
