#include<iostream>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
int s[n],sum=0,count=0,spare=0,can=0;
for(int i=0;i<n;i++) cin>>s[i];
for(int i=0;i<n;i++){
spare=spare+s[i];
if(spare>8){
can=can+8;
spare=spare-8;
}
else {
can=can+spare;
spare=0;
}
count++;
if(can>=k){
cout<<count;
return 0;
}
}
cout<<"-1";
}
