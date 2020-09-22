#include<iostream>
using namespace std;
main()
{
int n;
cin>>n;
int s[n],t[n];
for(int i=0;i<n;i++) cin>>s[i];
for(int i=0;i<n;i++) t[i]=s[i];
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
if(t[i]>t[j]){
int temp=t[i];
t[i]=t[j];
t[j]=temp;
}}}
for(int i=0;i<n/2;i++)
{
for(int j=0;j<n;j++){
if(t[i]==s[j])
{
cout<<j+1<<" ";
s[j]=-1;
break;
}}
for(int j=0;j<n;j++){
if(t[n-1-i]==s[j]){
cout<<j+1<<"\n";
s[j]=-1;
break;
}}
}
}
