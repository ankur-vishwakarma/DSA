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
int x=v[i][0]+s[i][2],flag=0;
while(x<s[i][0]){
int strt=x-s[i][2],end=x+s[i][2],strtp=0,endp=s[i][0]-1;
x++;
int j=0;
while(strt<v[i][j]&&j<s[i][0]-1) j++;
strtp=j;
j=s[i][0]-1;
while(end>v[i][j]&&j>=0) j--;
endp=j;
if(endp-strtp+1>=s[i][1]){ cout<<"NO\n",flag=1; break; }
}
if(flag==0) cout<<"YES\n";
}
}



