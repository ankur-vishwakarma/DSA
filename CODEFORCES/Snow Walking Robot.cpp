#include<bits/stdc++.h>
using namespace std;
main(){
	int q;
	cin>>q;
	string s[q];
	for(int i=0;i<q;i++) cin>>s[i];
	for(int i=0;i<q;i++){
		int l=0,r=0,u=0,d=0;
		for(int j=0;j<s[i].length();j++){
			if(s[i][j]=='L') l++;
			else if(s[i][j]=='R') r++;
			else if(s[i][j]=='U') u++;
			else d++;
		}
		int ud=min(u,d),lr=min(l,r);
		if(ud==0&&lr>1){
			cout<<"2\nLR\n";
			continue;
		}
		else if(lr==0&&ud>1){
			cout<<"2\nUD\n";
			continue;
		}
		cout<<ud*2+lr*2<<endl;
		for(int j=0;j<ud;j++) cout<<'U';
		for(int j=0;j<lr;j++) cout<<'L';
		for(int j=0;j<ud;j++) cout<<'D';
		for(int j=0;j<lr;j++) cout<<'R';
		cout<<endl;
	}
}
