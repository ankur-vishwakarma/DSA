#include<bits/stdc++.h>
using namespace std;
long countMoves(vector<int> numbers){
	
	long n=numbers.size(), smallest=INT_MAX,sum=0;
	vector<long> s(n);
	for(int i=0;i<n;i++) s[i]=(long)numbers[i];
	
	for(int i=0;i<n;i++){
		sum+=s[i];
		smallest=min(smallest,s[i]);
	}
	return sum-n*smallest;
}
int main(){
	int n;
	cin>>n;
	vector<int> s(n);
	for(int i=0;i<n;i++) cin>>s[i];
	cout<<countMoves(s);
	return 0;
}
