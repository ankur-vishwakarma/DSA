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
			cout<<i<<"i\n";
			int uni=0;
			for(int j=i*blk;j<i*blk+blk;j++){
				cout<<j<<"j\n";
				int count=0;
				for(int l=j+1;l<i*blk+blk;l++){
					if(s[l]==s[j]) count++;
					cout<<s[l]<<" "<<count<<endl;
				}
				if(count>=k) uni++;
				cout<<uni<<endl;
			}
			f[i]=uni;
		}
		//do manually fr lst block as size unsure
		//for(int i=blk;i<blk+1;i++)
		for(int i=0;i<blk+1;i++) cout<<f[i]<<" ";
	}
}
/*
1
16 1 2
1 2 3 4 1 2 1 3 1 5 1 3 5 7 6 6
1 10
*/
