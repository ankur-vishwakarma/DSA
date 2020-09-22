#include<iostream>
using namespace std;
main(){
int n;
cin>>n;
int s[n];
for(int i=0;i<n;i++) cin>>s[i];
int a=s[0],b=-1,c=-1,d=-1;
for(int i=1;i<n;i++) if(s[i]!=a){ b=s[i]; break; }
if(b!=-1) for(int i=1;i<n;i++) if(s[i]!=a&&s[i]!=b){ c=s[i]; break; }
if(c!=-1) for(int i=1;i<n;i++) if(s[i]!=a&&s[i]!=b&&s[i]!=c){ d=s[i]; break; }
if(d!=-1){ cout<<"-1"; return 0; }
if(b!=-1&&c!=-1){
if(a>b){int t=a;a=b;b=t;}
if(a>c){int t=a;a=c;c=t;}
if(b>c){int t=b;b=c;c=t;}
if((a+c)/2==b&&(a+c)%2==0) cout<<c-b;
else cout<<"-1";
}
else if(b!=-1){
int dif=b-a;
if(dif<0) dif=a-b;
if(dif%2==0) cout<<dif/2;
else cout<<dif;
}
else cout<<"0";
}
