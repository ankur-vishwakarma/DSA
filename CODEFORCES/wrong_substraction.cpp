#include<iostream>
using namespace std;
main(){
int n,k;
cin>>n>>k;
while(k!=0){
k--;
if(n%10!=0) n=n-1;
else n=n/10;
}
cout<<n;
}
