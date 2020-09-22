#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		long long pos[4];
		for(int i=1;i<=3;i++) pos[i]=-1;
		long long dist=INT_MAX;
		int n=s.length();
		for(int i=0;i<n;i++){
			pos[s[i]-'0']=i;
			if(pos[1]<i){ //search right
				int found1=0;
				for(int j=i+1;j<n;j++){
					if(s[j]=='1'){
						pos[1]=j;
						found1=1;
						break;
					}
				}
				if(!found1) break;	
			}
			if(pos[2]<i){ //search right
			    int found2=0;
				for(int j=i+1;j<n;j++){
					if(s[j]=='2'){
						pos[2]=j;
						found2=1;
						break;
					}
				}
				if(!found2) break;	
			}
			if(pos[3]<i){ //search right
				int found3=0;
				for(int j=i+1;j<n;j++){
					if(s[j]=='3'){
						pos[3]=j;
						found3=1;
						break;
					}
				}
				if(!found3) break;	
			}
			//cout<<pos[1]<<" "<<pos[2]<<" "<<pos[3]<<endl;
			long long r=max(pos[1],max(pos[2],pos[3]));
			long long l=min(pos[1],min(pos[2],pos[3]));
			//cout<<l<<" "<<r<<endl;
			dist=min(dist,r-l);
		}
		if(dist==INT_MAX) cout<<"0\n";
		else cout<<dist+1<<endl;
	}
}
