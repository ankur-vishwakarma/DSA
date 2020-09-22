#include<bits/stdc++.h>
using namespace std;
main(){
	string k,m;
	cin>>k>>m;
	char s[11][11];
	for(int i=0;i<11;i++) for(int j=0;j<11;j++) s[i][j]='@';
	int j=0,l=0,col=k.size();
    for(int i=0;i<m.size();i++){
    	if(j>=k.size()) l++,j=0;
    	s[l][j]=(char)m[i];
    	j++;
	}
	int rows=l;
	vector<pair<char,int> > v;
	for(int i=0;i<k.size();i++) v.push_back({k[i],i});
	sort(v.begin(),v.end());
	j=0,l=0;
	for(int i=0;i<=rows;i++){
		while(j<k.size()){
			if(s[i][v[j].second]!='@') cout<<s[i][v[j].second];
			j++;
		}
		if(j>=col) j=0;
	}
	
	
	
}

/* 
    	cout<<s[l][j]<<" "<<l<<" "<<j<<endl;
    	
	//for(int i=0;i<=rows;i++) for(int j=0;j<col;j++) cout<<s[i][j];
avlr
piyush
sales and use tax
*/




















/*int pos=0;
for(int i=0;i<shuffles.size();i++){
	if(shuffles[i]>0){
		pos-=shuffles[i];
		if(pos<0) pos=0;
	}
	else{
		pos+=shuffles[i];
		if(pos>numberOfCards-1) pos=numberOfCards-1;
	}
}
return pos;*/
