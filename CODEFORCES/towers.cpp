#include<iostream>
using namespace std;
main()
{
int n;
cin>>n;
int s[n];
for(int i=0;i<n;i++) cin>>s[i];
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
if(s[i]>s[j]){
int temp=s[i];
s[i]=s[j];
s[j]=temp;
}
}
}
int count=1,flag=1,max=1,h=0;
for(int i=1;i<n;i++){
flag++;
if(s[i]==s[i-1]){
count++;
i++;
flag--;
h=1;
while(s[i]==s[i-1]){
count++;
i++;
}
}
if(count>max) max=count;
count=1;
if(h==1){
h=0;
i--;
}
}
cout<<max<<" "<<flag;
}
