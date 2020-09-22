#include<iostream>
#include<set>
using namespace std;
main(){
	int n;
        cin>>n;
       int s[n];
       set<pair<int,int> >k;
for(int i=0;i<n;i++) cin>>s[i];
int max,pmax,j=0;
while(s[j]==s[j+1]&&j+1<n) j++;
if(j==n-1){ cout<<"0"; return 0; } //check this
if(s[j]>s[j+1]) max=s[j],pmax=s[j+1];
else if(s[j+1]<s[j]) max=s[j+1],pmax=s[j];

k.insert(make_pair(max,pmax));

for(int i=j+1;i<n;i++){
while(s[i+1]<max&&i+1<n){
       	k.insert(make_pair(max,s[i+1]);
//	cout<<max<<" "<<s[i+1]<<endl;
	if(s[i+1]>pmax) pmax=s[i+1];
	i++;
	}
 if(s[i+1]>max) pmax=max,max=s[i+1],k.insert(make_pair(max,pmax));
 }
 cout<<k.size();
 }



