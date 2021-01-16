#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
	int tmp=a;
	a=b;
	b=tmp;
}
int helper(int * s,int strt,int end){
	//srand(1);
	int shuf=rand()%(end+1);
	//cout<<strt<<" "<<shuf<<" "<<end<<endl;
	if(shuf<strt) shuf=strt;
	//cout<<strt<<" "<<shuf<<" "<<end<<endl;
	//shuf%=(end+1);
	swap(s[shuf],s[end]);
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
int up_q_s(int * s, int strt, int end, int k){
	//cout<<strt<<" "<<end<<endl;
	if(strt>end) return -1;
	int pivot=helper(s,strt,end);
	if(pivot+1==k) return s[pivot];
	/*for(int i=strt;i<=end;i++) cout<<s[i]<<" ";
	cout<<pivot<<"p v"<<s[pivot]<<endl;*/
	if(k<pivot+1) return up_q_s(s,strt,pivot-1,k);
	/*for(int i=strt;i<=end;i++) cout<<s[i]<<" ";
	cout<<"aftrleft\n";*/
	return up_q_s(s,pivot+1,end,k);
	/*for(int i=strt;i<=end;i++) cout<<s[i]<<" ";
	cout<<"aftrrght\n";*/
}
main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n,k;
		cin>>n;
		int s[n];
		for(int j=0;j<n;j++) cin>>s[j];
		cin>>k;
		cout<<up_q_s(s,0,n-1,k)<<endl;
	}
}
