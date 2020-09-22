#include<iostream>
using namespace std;
main(){
int q;
cin>>q;
int s[q*2+1],l=q,i=q,k=q-1;
while(l--){
int id;
char c;
cin>>c>>id;
if(c=='R') s[i]=id,i++;
else if(c=='L') s[k]=id,k--;
else{
int j;
for(j=k+1;j<i;j++) if(s[j]==id) break;
if(j-k-1<i-j-1) cout<<j-k-1<<"\n";
else cout<<i-j-1<<"\n";
}
}
}
