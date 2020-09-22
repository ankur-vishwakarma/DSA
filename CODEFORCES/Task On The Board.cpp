#include<bits/stdc++.h>
using namespace std;
main(){
	int T;
	cin>>T;
	while(T--){
		string s;
		cin>>s;
		int m;
		cin>>m;
		int t[m];
		int k=0;
		for(int i=0;i<m;i++) cin>>t[i];
		//sort(t,t+m);
		sort(s.begin(),s.end(),greater<int>());
		int * pos=new int[m]{0};
		char * ans=new char[m];
		for(int i=0;i<m;i++){
			//find letter
			int count=0;
			for(int j=0;j<m;j++) if(pos[j]==t[j]) count++;
			int sames=1;
			//cout<<count<<endl;
			if(count==0) break;
			while(sames<count){
				if(s[k]==s[k+1]) sames++;
				else sames=1;
				k++;
			}
			//cout<<k<<" "<<s[k]<<endl;
			//place n update
			int j=0;
			while(count--){
				while(pos[j]!=t[j]) j++;
				ans[j]=s[k];
				pos[j]=-1;
				//forward update
				int a=1;
				for(int l=j+1;l<m;l++){
					if(pos[l]!=t[l]&&pos[l]!=-1) pos[l]+=a;
					a++;
				}
				a=1;
				for(int l=j-1;l>=0;l--){
					if(pos[l]!=t[l]&&pos[l]!=-1) pos[l]+=a;
					a++;
				}
				/*for(int l=0;l<m;l++) cout<<pos[l]<<" ";
				cout<<endl;*/
			}
			while(s[k]==s[k+1]) k++;
			k++;
			/*for(int l=0;l<m;l++) cout<<ans[l];
			cout<<endl;*/
		}
		for(int l=0;l<m;l++) cout<<ans[l];
		cout<<endl;
	}
}
