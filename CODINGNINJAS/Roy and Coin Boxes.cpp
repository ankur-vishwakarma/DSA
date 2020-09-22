#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,m;
	cin>>n>>m;
	int s[m][2];
	for(int i=0;i<m;i++) cin>>s[i][0]>>s[i][1],s[i][0]--,s[i][1]--;
	int q;
	cin>>q;
	int t[q];
	for(int i=0;i<q;i++) cin>>t[i];
	int ans[n+1]={0};
	for(int i=0;i<m;i++){
		ans[s[i][0]]++,ans[s[i][1]+1]--;
	}
	for(int i=1;i<=n;i++) ans[i]=ans[i-1]+ans[i];
	sort(ans,ans+(n+1));
	unordered_map <int,int> frst_index;
	vector <int> uniques;
	for(int i=0;i<=n;i++){
		if(!frst_index[ans[i]]){
			uniques.push_back(ans[i]);
			frst_index[ans[i]]=i+1;  //plus 1 to avoid zero in postn
		}
	}
	for(int i=0;i<q;i++){
		int itr=lower_bound(uniques.begin(),uniques.end(),t[i])-uniques.begin();
		if(itr==uniques.size()){
			cout<<"0\n";
			continue;
		}
		int val=uniques[itr];
		int occurence=frst_index[val]-1;  //counter plus one effect;
		int final=(n+1)-occurence;
		cout<<final<<endl;
	}
}
