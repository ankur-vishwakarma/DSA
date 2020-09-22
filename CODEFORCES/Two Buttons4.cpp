#include<bits/stdc++.h>
using namespace std;
main(){
	int n,m;
	cin>>n>>m;
	if(m<n){
		cout<<n-m<<endl;
	}
	else{
		//take out halfs
		int k=m;
		vector<int> q;
		q.push_back(m);
		while(k>1){
			int half=k/2;
			if(k%2!=0) half++;
			//cout<<half<<endl;
			q.push_back(half);
			k=half;
		}
		//for(int i=q.size()-1;i>0;i--) cout<<q[i]<<" ";
		//cout<<endl;
		//search closer half
		long long c_d=INT_MAX,flag;
		for(int i=q.size()-1;i>0;i--){
			int ans;
			if(q[i]<=n){
				ans=n-q[i];
			}
			else{
				int halfs_half=q[i]/2;
				if(q[i]%2!=0) halfs_half++;
				long long f=INT_MAX;
				for(long long i=n;i>=halfs_half;i--){
					long long ans=n-i,j=i; 
					while(j<q[i]) j*=2,ans++;
					if(j>q[i]) ans+=(j-q[i]);
					//cout<<i<<" "<<ans<<endl;
					f=min(f,ans);
				}
				ans=f;
			}
			//cout<<q[i]<<" "<<ans<<endl;
			if(ans<c_d){
				c_d=ans;
				flag=i;
			}
		}
		//cout<<q[flag]<<"falg\n";
		int total=0,i=flag;
		while(i>=0){
			//reach ith of q
			//cout<<q[i]<<endl;
			if(q[i]<=n){
				total+=(n-q[i]);
			}
			else{
				int halfs_half=q[i]/2;
				if(q[i]%2!=0) halfs_half++;
				long long f=INT_MAX;
				for(long long k=n;k>=halfs_half;k--){
					long long ans=n-k,j=k;
					while(j<q[i]) j*=2,ans++;
					if(j>q[i]) ans+=(j-q[i]);
					//cout<<k<<" "<<ans<<endl;
					f=min(f,ans);
				}
				total+=f;
			}
			n=q[i];
			i--;
		}
		cout<<total;
	}
	
}
