#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int s[n];
for(int i=0;i<n;i++) cin>>s[i];
for(int i=0;i<n;i++) if(s[i]==1){
cout<<"HARD";
return 0;
}
cout<<"EASY";
}
