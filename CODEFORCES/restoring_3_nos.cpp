#include<iostream>
using namespace std;
main(){
int s[4];
for(int i=0;i<4;i++) cin>>s[i];
int max=s[0],flag=0;
for(int i=1;i<4;i++) if(s[i]>max) max=s[i],flag=i;
for(int i=0;i<4;i++) if(i!=flag) cout<<max-s[i]<<" ";
}
