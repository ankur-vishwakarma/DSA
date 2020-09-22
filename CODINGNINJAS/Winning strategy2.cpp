#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
	int tmp=a;
	a=b;
	b=tmp;
}
int main(){
	int n;
	cin>>n;
	int s[n],ans[n];
	for(int i=0;i<n;i++) cin>>s[i],ans[i]=i+1;
	long long total=0;
	for(int i=0;i<n-2;i++){
		if(ans[i]==s[i]) continue;
		if(s[i]==ans[i+1]){
			swap(ans[i],ans[i+1]);
			total++;
		}
		else if(s[i]==ans[i+2]){
			swap(ans[i+2],ans[i+1]);
			swap(ans[i],ans[i+1]);
			total+=2;
		}
		else{
			cout<<"NO";
			return 0;
		}
	}
	//handle for n-1
	if(ans[n-2]!=s[n-2]) total++;
	cout<<"YES\n"<<total;
	return 0;
}
