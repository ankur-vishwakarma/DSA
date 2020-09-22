#include<iostream>
using namespace std;
main(){
	int n1,n2,k,m;
	cin>>n1>>n2>>k>>m;
int s[n1],t[n2];
for(int i=0;i<n1;i++) cin>>s[i];
for(int i=0;i<n2;i++) cin>>t[i];
if(k<=n1&&m<=n2){
	int i=0;
while(n2-i>=m){
if(s[k-1]<t[i]){ cout<<"YES";  return 0;  }
i++;
}
}
cout<<"NO";
}
