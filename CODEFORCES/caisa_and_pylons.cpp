#include<iostream>
using namespace std;
main(){
int n;
cin>>n;
int s[n];
for(int i=0;i<n;i++) cin>>s[i];
int e=0,rs=s[0];
for(int i=0;i<n-1;i++){
 int d=(s[i]-s[i+1]);
if(d>=0) e+=d;
else{
if(e>=(-d)) e=e-(-d);
else{
rs=rs+(-(e-(-d)));
e=0;
}
}
}
cout<<rs;
}
