#include<iostream>
using namespace std;
main(){
int n,count=0;
cin>>n;
for(int i=1;i<=n/2;i++){
int emp=n-i;
if(emp%i==0) count++;
}
cout<<count;
}
