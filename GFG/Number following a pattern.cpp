#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int count=1;
		for(int i=0;i<s.length();){
			if(s[i]=='I') cout<<count, count++, i++;
			else{
				int it=0,gap=0;
				while(s[i]=='D') i++, gap++;
				it=gap;
				while(gap) cout<<count+gap, gap--;
				count+=(it+1);
			}
		}
		cout<<endl;
	}
}
