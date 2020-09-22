#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		long long s[3],ans;
		cin>>s[0]>>s[1]>>s[2];
		sort(s,s+3);
		ans=s[1]-s[0]+s[2]-s[1]+s[2]-s[0];
		if(s[0]==s[1]&&ans!=0) ans-=2,s[0]++,s[1]++;
		if(s[1]==s[2]&&ans!=0) ans-=2,s[1]--,s[2]--;
		if(s[0]<s[1]) s[0]++;
		if(s[2]>s[1]) s[2]--;
		cout<<s[1]-s[0]+s[2]-s[1]+s[2]-s[0]<<endl;
	}
}
