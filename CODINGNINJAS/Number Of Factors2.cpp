#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,n;
		cin>>a>>b>>n;
		if(n==0){
			cout<<"1\n";
			continue;
		}
		int primes[b+1];
		primes[1]=0;
		for(int i=2;i<=b;i++) primes[i]=1;
		vector<int> p;
		unordered_map<int,bool> m;
		//calculated primes
		for(int i=2;i*i<=b;i++){
			//cout<<i<<" ";
			if(primes[i]){
				p.push_back(i);
				m[i]=true;
				for(int j=i*i;j<=b;j+=i) primes[j]=0;
			}
		}
		if(n==1){
			int c=0;
			for(int i=a;i<=b;i++) if(primes[i]) c++;
			cout<<c<<endl;
			continue;
		}
		/*cout<<endl;
		for(int i=0;i<p.size();i++) cout<<p[i]<<" ";
		cout<<endl;*/
		int s[b+1],count[b+1]={0};
		for(int i=a;i<=b;i++) s[i]=i;
		for(int i=0;i<p.size();i++){
			int strt=p[i]*(a/p[i]);
			if(strt<a) strt+p[i];
			for(int j=strt;j<=b;j+=p[i]){
				if(s[j]%p[i]==0&&count[j]<n){
					count[j]++;
					s[j]=s[j]/p[i];
					//while(s[j]%p[i]==0) s[j]=s[j]/p[i];
				}
			}
		}
		for(int i=a;i<=b;i++){
			//cout<<s[i]<<" ";
			if(m[s[i]]) cout<<i<<" ",count[i]++,s[i]=1;
		}
		/*cout<<endl;
		for(int i=a;i<=b;i++) cout<<s[i]<<" ";
		cout<<endl;
		for(int i=a;i<=b;i++) cout<<count[i]<<" ";
		cout<<endl;
		for(int i=a;i<=b;i++) cout<<i<<" ";*/
		int ans=0;
		for(int i=a;i<=b;i++){
			if(count[i]==n&&s[i]==1) ans++;
		}
		cout<<ans<<endl;
	}
}
