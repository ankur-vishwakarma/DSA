#include<bits/stdc++.h>
using namespace std;
string max_pal(string s){
	int n=s.length();
	if(n==1) return s;
	int l=0,r=0;
	for(int i=0;i<n;i++){
		//check for odd with i at centre
		int j=i-1,k=i+1;
		while(j>=0&&k<n&&s[j]==s[k]){
			if(k-j>r-l) r=k,l=j;
			j--,k++;
		}
		//current included as left
		j=i,k=i+1;
		while(j>=0&&k<n&&s[j]==s[k]){
			if(k-j>r-l) r=k,l=j;
			j--,k++;
		}
		//current included as right
		j=i-1,k=i;
		while(j>=0&&k<n&&s[j]==s[k]){
			if(k-j>r-l) r=k,l=j;
			j--,k++;
		}
	}
	string ans="";
	for(int i=l;i<=r;i++) ans=ans+s[i];
	ans=ans+'\0';
	return ans;
}
main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<max_pal(s)<<endl;
	}
}
