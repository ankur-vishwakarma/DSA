#include<iostream>
#include<vector>
using namespace std;
main(){
int n;
cin>>n;
vector<int> s;
while(n!=0){
if(n%10!=1&&n%10!=4){
cout<<"NO";
return 0;
} 
s.push_back(n%10);
n/=10;
}
if(s[s.size()-1]==4){
 cout<<"NO";
return 0;
}
for(int i=s.size()-2;i>=0;i--){
if(s[i]==4) if(s[i+1]!=1) if(s[i+2]!=1){
 cout<<"NO";
return 0;
}
}
cout<<"YES";
}
