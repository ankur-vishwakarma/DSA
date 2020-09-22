 #include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	int s[t][3];
	vector<vector<pair<int,int> > >v;
	for(int i=0;i<t;i++){
		cin>>s[i][0]>>s[i][1]>>s[i][2];
		vector<pair<int,int> > tmp; int x,y;
		for(int j=0;j<s[i][2];j++){
			cin>>x>>y; 
			tmp.push_back( make_pair(x,y) );
		}
		v.push_back(tmp);
	}
	for(int i=0;i<t;i++){
		int r[s[i][0]]={0},c[s[i][1]]={0};
		for(int j=0;j<s[i][2];j++){
			r[v[i][j].first-1]++; c[v[i][j].second-1]++;
			//cout<<v[i][j].first-1<<" "<<v[j][j].second-1<<endl;
			//cout<<endl;
		}
		int ro=0,co=0;
		//for(int j=0;j<s[i][0];j++) cout<<r[j]<<" ";
		for(int j=0;j<s[i][0];j++) if(r[j]%2!=0) ro++;
		for(int j=0;j<s[i][1];j++) if(c[j]%2!=0) co++;
		int ans=ro*(s[i][1]-co)+co*(s[i][0]-ro);
		cout<<ans<<"\n";
	}
}
