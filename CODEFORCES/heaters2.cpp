#include<iostream>
using namespace std;
int main(){
int n,r;
cin>>n>>r;
int s[n],t[n][2],j=0;
for(int i=0;i<n;i++) cin>>s[i];
for(int i=0;i<n;i++) if(s[i]==1) t[j][0]=i-r+1,t[j][1]=i+r-1,j++;
int flag=-1,hold=-1,i=0,count=0;
while(hold<=n-1){
if(t[i][0]<=hold+1){
while(t[i][0]<=hold+1&&i<j) i++;
--i;
}
else{
cout<<"-1";
return 0;
}
if(i!=flag&&i>=0) hold=t[i][1],flag=i;
else{
cout<<"-1";
return 0;
}
//hold=t[i][1];
//cout<<hold<<"h\n";
//cout<<i<<"i\n";
count++;
}
cout<<count;
}
