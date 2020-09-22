#include<iostream>
using namespace std;
main(){
int k;
cin>>k;
int sum=0,c=k;
while(c!=0) sum+=(c%10),c/=10;
cout<<k<<10-sum;
}
