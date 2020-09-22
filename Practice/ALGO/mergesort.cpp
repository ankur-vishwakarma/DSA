#include<iostream>
using namespace std;
void merge(int s[],int start,int mid,int end){
int i=start,j=mid+1,k=start,t[end];
while(i!=mid||j!=end-1){
if(s[i]<s[j]) t[k]=s[i],i++,k++;
else t[k]=s[j],j++,k++;
}
while(i!=mid) t[k]=s[i],i++,k++;
while(j!=end-1) t[k]=s[j],j++,k++;
for(i=start;i<end;i++) s[i]=t[i];
}
void mergesort(int s[],int start,int end){
if(start!=end){
mergesort(s,start,end/2);
mergesort(s,end/2+1,end);
merge(s,start,end/2,end);
}
}
main(){
int n;
cin>>n;
int s[n];
for(int i=0;i<n;i++) cin>>s[i];
mergesort(s,0,n-1);
for(int i=0;i<n;i++) cout<<s[i];
}
