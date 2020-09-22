#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
unordered_map<int,int> prime_facs(int n){
	unordered_map<int,int> m;
	while(n%2==0){
		m[2]++;
		n/=2;
	}
	for(int i=3;i<=sqrt(n);i+=2){
		while(n%i==0){
			m[i]++;
			n/=i;
		}
	}
	if(n>2) m[n]++;
	return m;
} 
main(){
	int n=2;
	unordered_map<int,int> mp;
	mp[2]=1;
	for(int i=3;i<=2-0;i++){
		if(n%i!=0){
			unordered_map<int,int> m=prime_facs(i);
			//check for each prime f of i if its power same or not
			for(auto x:m){
				if(mp[x.first]<x.second){
					cout<<mp[x.first]<<" "<<x.second<<" "<<x.first<<" "<<i<<" ";
					int left=x.second-mp[x.first];
					cout<<left<<"l ";
					n*=(pow(x.first,left));
					mp[x.first]+=left;
					cout<<n<<endl;
				}
			}
		}
	}
	cout<<n;
}
