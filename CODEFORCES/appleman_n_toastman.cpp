#include<iostream>
using namespace std;
main(){
int n;
cin>>n;
int s[n],sum=0;
for(int i=0;i<n;i++) cin>>s[i],sum+=s[i];
int score=sum;
for(int i=0;i<n;i++) for(int j=i+1;j<n;j++) if(s[i]>s[j]){
int temp=s[i];
s[i]=s[j];
s[j]=temp;
}
for(int i=0;i<n-1;i++){
score+=sum;
sum-=s[i];
}
cout<<score;
}
