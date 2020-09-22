#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[n][2];
		for(int i=0;i<n;i++) cin>>s[i][0];
		for(int i=0;i<n;i++) cin>>s[i][1];
		int sortd=1;
		for(int i=0;i<n-1;i++){
			if(s[i][0]>s[i+1][0]){
				sortd=0;
				break;
			}
		}
		//cout<<sortd<<endl;
		if(sortd){
			cout<<"Yes\n";
			continue;
		}
		int flag=0;
		for(int i=0;i<n-1;i++){
			if(s[i][1]!=s[i+1][1]){
				flag=1;
				break;
			}
		}
		if(flag) cout<<"Yes\n";
		else cout<<"No\n";
	}
}
/*

				else if(s[j][0]==s[j+1][0]&&s[j][1]!=s[j+1][1]){
					if(j+2<n&&s[j+2][1]!=s[j][1]){
						int tmp=s[j][0],tmp1=s[j][1];
						s[j][0]=s[j+1][0],s[j][1]=s[j+1][1];
						s[j+1][0]=tmp,s[j+1][1]=tmp1;
					}
				}
*/
