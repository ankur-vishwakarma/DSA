#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	int count=1;
	while(t--){
		int n;
		cin>>n;
		int **s=new int*[n];
		for(int i=0;i<n;i++) s[i]=new int[n];
		for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>s[i][j];
		long long sum=0,row=0,col=0;
		for(int i=0;i<n;i++){
			sum+=s[i][i];
			int r=0,c=0;
			map<int,bool> rm;
			for(int j=0;j<n;j++){
				//cout<<s[i][j]<<" "<<c<<endl;
				if(rm[s[i][j]]){
					r++;
					continue;
				}
				rm[s[i][j]]=true;
			}
			if(r>row) row=r+1;
			rm.clear();
			
			map<int,bool> cm;
			for(int j=0;j<n;j++){
				if(cm[s[j][i]]){
					c++;
					continue;
				}
				cm[s[i][j]]=true;
			}
			if(c>col) col=c+1;
			cm.clear();
		}
		cout<<"Case #"<<count<<": "<<sum<<" "<<row<<" "<<col<<endl;
		count++;
	}
}
