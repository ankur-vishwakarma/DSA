#include<iostream>
using namespace std;
int main(){
long long n,m,k,l;
cin>>n>>m>>k>>l;
if(n<m){
 cout<<"-1";
return 0;
}
int each=n/m;
if(each*m<l){ 
cout<<"-1";
return 0;
}
cout<<each;
}
