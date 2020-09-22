#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,q,k;
		cin>>n>>q>>k;
		int s[n],w[q][2];
		for(int i=0;i<n;i++) cin>>s[i];
		for(int i=0;i<q;i++) cin>>w[i][0]>>w[i][1];
		//lets create blocks array
		const int blk=sqrt(n);
		int f[blk+1];
		//lets preprocess n store in f
		for(int i=0;i<blk;i++){
			int uni=0;
			for(int j=i*blk;j<i*blk+blk&&j<n;j++){
				int count=1;
				for(int l=j+1;l<i*blk+blk&&l<n;l++){
					if(s[l]==s[j]) count++;
					//cout<<s[l]<<" "<<count<<endl;
				}
				if(count>=k) uni++;
			}
			f[i]=uni;
		}
		//do manually fr lst block as size unsure
	    int uni=0;
		for(int i=blk*blk;i<n;i++){
			cout<<i<<'\n';
			int count=1;
			for(int j=i+1;j<n;j++) if(s[j]==s[i]) count++;
			if(count>=k) uni++;
		}
		f[blk]=uni;
		//for(int i=blk;i<blk+1;i++)
		for(int i=0;i<=blk;i++) cout<<f[i]<<" ";
		cout<<endl;
		for(int i=0;i<q;i++){
			int lblk=w[i][0]/blk,rblk=w[i][1]/blk,min=INT_MAX;
			if(lblk==rblk){
				int uni=0;
				for(int j=w[i][0]-1;j<w[i][1];j++){
					int count=0;
					for(int l=j+1;l<w[i][1];l++) if(s[l]==s[j]) count++;
					if(count>=k) uni++;
				}
				cout<<uni<<endl;
			}
			else{
				int uni=0;
				//first block manually
				for(int j=w[i][0];j<lblk*blk;j++){
					int count=0;
					for(int l=j+1;l<lblk*blk;l++) if(s[j]==s[l]) count++;
					if(count>=k) uni++;
				}
				//block by block
				for(int j=lblk+1;j<rblk;j++) uni+=f[j];
				//last block too manually
				for(int j=rblk*blk;j<w[i][1];j++){
					int count=0;
					for(int l=j+1;l<w[i][1];l++) if(s[j]==s[l]) count++;
					if(count>=k) uni++;
				}
				cout<<uni<<endl;
			}
		}
	}
}
/*
1
15 1 2
1 2 3 4 1 2 1 3 1 5 1 3 5 7 6 
1 10
*/
