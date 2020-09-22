#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	vector <vector<int> >v;
	vector<int> s;
	for(int i=0;i<t;i++){
	    vector<int> tmp; int k,b; 
	    cin>>k;
	    for(int j=0;j<k;j++){ cin>>b; tmp.push_back(b); } 
	    v.push_back(tmp);
	    cin>>k; s.push_back(k);
	}
	for(int i=0;i<t;i++){
		int strt=0,end=v[i].size()-1,mid;
		while(end-strt>1){
			mid=(strt+end)/2;
			if(v[i][mid]>=v[i][strt]) strt=mid;
			else end=mid;
		//	cout<<v[i][strt]<<" "<<v[i][mid]<<" "<<v[i][end]<<endl;
		}
		//cout<<v[i][strt]<<" "<<v[i][end]<<endl;
		int s1=0,e1=strt,s2=end,e2=v[i].size()-1,flag=-1;
		while(s1<=e1){
			mid=(s1+e1)/2;
			if(v[i][mid]==s[i]){  flag=mid; break;
			}
			else if(s[i]<v[i][mid]) e1=mid-1;
			else s1=mid+1;
		}
		if(flag==-1){
			while(s2<=e2){
			mid=(s2+e2)/2;
			if(v[i][mid]==s[i]){ flag=mid; break;
			}
			else if(s[i]<v[i][mid]) e2=mid-1;
			else s2=mid+1;
		}
		}
		cout<<flag<<endl;
		}
	/*for(int i=0;i<t;i++){
	    for(int j=0;j<v[i].size();j++){ cout<<v[i][j]<<" "; }
	    cout<<endl;
	}*/
	return 0;
}
