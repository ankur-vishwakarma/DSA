#include<bits/stdc++.h>
using namespace std;
main(){
	int n,k,l;
	cin>>n>>k>>l;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	long long inc_only=0;
	sort(s,s+n);
	for(int i=0;i<n-1;i++) inc_only+=((s[n-1]-s[i])*l);
	//both
	long long t=0;
	for(int i=0;i<n/2;i++){
		int dif=s[n-i-1]-s[i];
		//cout<<dif<<" "<<i<<endl;
		s[n-i-1]-=(dif/2),s[i]+=(dif/2);
		//cout<<s[n-i-1]<<"e b"<<s[i]<<endl;
		t+=((dif/2)*k);
		if(dif%2!=0){
			t+=l;
			s[i]+=1;
		}  //increase lesser
		//cout<<t<<" "<<s[i];
	}
	int lst_element=s[n-1];
	for(int i=0;i<n-1;i++){
		//cout<<s[i]<<" ";
		if(s[i]!=lst_element) t+=((lst_element-s[i])*l); 
	}
	cout<<min(inc_only,t);
}
