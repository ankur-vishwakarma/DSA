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
for(int i=0;i<t;i++){
sort(v[i].begin(),v[i].end());
int d=1;
int strt=d-s[i][2],end=d+s[i][2],j=0,k=s[i][0]-1,flag=0,hold=0;
while(v[i][j]<strt) j++;
while(v[i][k]>end) k--;

//cout<<j<<" "<<k<<endl;
if(k-j+1>=s[i][1]) cout<<"NO\n",flag=1;
j=0;
if(flag!=1){
while(s[i][0]-1-j>=s[i][1]){
d=v[i][j]+s[i][2];
end=d+s[i][2];
vector<int> :: iterator it=upper_bound(v[i].begin()+j,v[i].end(),end);

//cout<<end<<" "<<*it;
if(it-(v[i].begin()+j)>=s[i][1]) cout<<"NO\n",hold=1;

j++;
}//while
if(hold!=1) cout<<"YES\n";
}//if



}//for
}
