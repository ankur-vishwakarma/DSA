#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
main(){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	sort(s,s+n);
	long long t=0,count=0,pen=0;
	for(int i=0;i<n;i++){
		t+=s[i];
		//cout<<t<<" ";
		if(t<=350){
			count++;
		}
		else if(t>350 && t<=710){
			count++;
			pen+=(t-350);
		}
		else break;
	}
	cout<<count<<" "<<pen<<endl;
}
