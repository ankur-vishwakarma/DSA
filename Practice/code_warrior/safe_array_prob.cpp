#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
main(){
	int t;
	cin>>t;
	int s[t][3];
	vector< vector<int> >v;
        for(int i=0;i<t;i++){
		vector<int> temp;
		cin>>s[i][0]>>s[i][1]>>s[i][2];
		for(int j=0;j<s[i][0];j++){
			int k;
			cin>>k;
			temp.push_back(k);
		}
		v.push_back(temp);
	}
/*	for(int i=0;i<t;i++){
	       	for(int j=0;j<v[i].size();j++) cout<<v[i][j]<<" ";
		cout<<"\n";
	}
	for(int i=0;i<t;i++){
	    if(s[i][0]>=s[i][1]) cout<<"NO\n";
	    else cout<<"YES\n";
	}*/
	for(int i=0;i<t;i++){
                 sort(v[i].begin(),v[i].end());
		long long gta=s[i][1],flag=0;
		while(gta<=s[i][0]){
                     for(long long j=0;j+gta-1<v[i].size();j++){
			long long frst=v[i][j],end=v[i][j+gta-1];
			if(frst+s[i][2]==end-s[i][2]) cout<<"NO\n",flag=1;
             }
          if(flag==1) break;
           else gta++;
        }
      if(flag==0) cout<<"YES\n";
}
}
