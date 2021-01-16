#include<bits/stdc++.h>
using namespace std;
int n;
void swap(int &a,int &b){
	int tmp=a;
	a=b;
	b=tmp;
}
void optimize(int * s,int i){
	int parentat;
	if(i%2==0) parentat=(i-2)/2;
	else parentat=(i-1)/2;
	if(parentat<0) return;
	if(s[parentat]<s[i])  swap(s[parentat],s[i]);
	i=parentat;
	optimize(s,i);
	return;
}
void push(int * s,int b,int i){
	s[i]=b;
	optimize(s,i);
}
int pop(int *s){
	n--;
	int popped=s[0];
	s[0]=s[n];
	optimize(s,n-1);
	//optimize(s,n-2);
	return popped;
}
main(){
	cin>>n;
	int s[n],b;
	for(int i=0;i<n;i++){
		cin>>b;
		push(s,b,i);
	}
	for(int i=0;i<n;i++) cout<<s[i]<<" ";
	cout<<"\n"<<pop(s)<<endl; 
	for(int i=0;i<n;i++) cout<<s[i]<<" ";
	cout<<"\n"<<pop(s)<<endl;
	for(int i=0;i<n;i++) cout<<s[i]<<" ";
	cout<<"\n"<<pop(s)<<endl;
	for(int i=0;i<n;i++) cout<<s[i]<<" ";
	cout<<"\n"<<pop(s)<<endl;
	for(int i=0;i<n;i++) cout<<s[i]<<" ";
}
