#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		string p,h;
		cin>>p>>h;
		sort(p.begin(),p.end());
		int s=0,e=p.length()-1;
		int b=0;
		while(e<h.length()){
			int flag=0;
			//cout<<s<<" "<<e<<" ";
			string c(h,s,e-s+1);
			//cout<<c<<endl;
			sort(c.begin(),c.end());
		//	cout<<c<<endl;
			for(int i=0;i<p.length();i++){
				
				if(p[i]!=c[i]){
					flag=1;
					break;
				}
			}
			if(!flag){
				b=1;
				cout<<"YES\n";
				break;
			}
			s++,e++;
		}
		if(!b) cout<<"NO\n";
	}
}
