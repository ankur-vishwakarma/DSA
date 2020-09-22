#include<bits/stdc++.h>
using namespace std;
main(){
	int n,k;
	cin>>n>>k;
	long long s[n+1];
	for(int i=0;i<n;i++){
		cin>>s[i];
		s[i]=s[i]%k;
		if(s[i]==0) s[i]=k;
		//cout<<s[i]<<" ";
	}
	s[n]=1;
	///cout<<endl;
	/*//get prime factors present in k
	int l=k;
	unordered_map<int,int> m; //prime,freq
	for(int i=2;i*i<=k;i++){
		while(l%i==0){
			m[i]++;
			l/=i;
		}
	}
	if(l>2) m[l]=1;
	//for(auto itr=m.begin();itr!=m.end();itr++) cout<<itr->first<<" "<<itr->second<<endl;*/
	//USING SLIDING WINDOW PIYUSH APPROACH
	//checking primes after multiplication
	long long mul=1;
	int front=0,end=-1;
	long long total=0;
	while(front<=n-1){
		//cout<<front<<" "<<end<<" "<<mul<<"m "<<total<<endl;
		if(end==n-1||mul%k==0){
			//remove effect
			mul=mul/s[front];
			front++;
		}else{
			end++;
			mul=(mul%k*s[end]%k)%k;
			if(mul==0) mul=k;
			if(mul%k==0) total+=(n-end);
		}
	}
	if(s[n-1]%k==0) total++;
	cout<<total<<endl;
}
