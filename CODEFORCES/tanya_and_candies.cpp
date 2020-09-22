#include<iostream>
using namespace std;
main(){
int n;
cin>>n;
int s[n];
for(int i=0;i<n;i++) cin>>s[i];
int se[n/2+1],so[n/2+1],j;
so[0]=s[0],se[0]=s[1];
for(int i=0,j=1;i<n;i+=2) so[j]=so[j-1]+s[i],j++;
for(int i=1,j=1;i<n;i+=2) se[j]=se[j-1]+s[i],j++;
for(int i=0;i<n/2;i++) cout<<so[i]<<endl;
for(int i=0;i<n/2;i++) cout<<se[i]<<endl;
}
