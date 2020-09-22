#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
	int tmp=a;
	a=b;
	b=tmp;
}
int helper(int * s,int strt,int end){
	int pivot=end;
	int i=strt-1,j=strt;
	while(j<pivot){
		//cout<<s[j]<<"loop "<<s[pivot]<<endl;
		if(s[j]<s[pivot]) i++,swap(s[i],s[j]);;
		j++;
	}
	swap(s[i+1],s[pivot]);
	return i+1;
}
void quick_sort(int * s, int strt, int end){
	cout<<strt<<" "<<end<<endl;
	if(strt>=end) return;
	int pivot=helper(s,strt,end);
	for(int i=strt;i<=end;i++) cout<<s[i]<<" ";
	cout<<pivot<<"p v"<<s[pivot]<<endl;
	quick_sort(s,strt,pivot-1);
	for(int i=strt;i<=end;i++) cout<<s[i]<<" ";
	cout<<"aftrleft\n";
	quick_sort(s,pivot+1,end);
}
main(){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	quick_sort(s,0,n-1);
	for(int i=0;i<n;i++) cout<<s[i]<<" ";
}
/*
5
2 5 4 1 3
*/
