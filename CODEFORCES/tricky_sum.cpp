#include<iostream>
#include<cmath>
using namespace std;
main(){
int t;
cin>>t;
int s[t];
for(int i=0;i<t;i++) cin>>s[i];
for(int i=0;i<t;i++){
long long sum=0;
for(int j=0;pow(2,j)<=s[i];j++) sum+=pow(2,j);
long long summ=(s[i]*(s[i]+1))/2-2*sum;
cout<<summ<<"\n";
}
}
