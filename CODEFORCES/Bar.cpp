#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	int count=0;
	map<string,int> c;
	c["ABSINTH"]=1, c["BEER"]=1, c["BRANDY"]=1, c["CHAMPAGNE"]=1, c["GIN"]=1, c["RUM"]=1, c["SAKE"]=1, c["TEQUILA"]=1, c["VODKA"]=1, c["WHISKEY"], c["WINE"]=1;
	while(n--){
		string s;
		cin>>s;
		//chck no or string
		//cout<<s[0]-'0';
		if(s[0]-'0'>=0&&s[0]-'0'<=9){
			int nn=0;
			for(int i=0;i<s.length();i++){
				nn*=10;
				int to=s[i]-'0';
				nn+=to;
			}
			//cout<<nn<<endl;
			if(nn<18) count++;
		}else{
			if(c.find(s)!=c.end()) count++;
		}
	}
	cout<<count<<endl;
}
