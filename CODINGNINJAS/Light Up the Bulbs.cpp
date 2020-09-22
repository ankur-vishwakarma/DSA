#include<bits/stdc++.h>
using namespace std;
main(){
	int n,x,y;
	cin>>n>>x>>y;
	string s;
	cin>>s;
	int last_zero=n;
	for(int i=n-1;i>=0;i--) if(s[i]=='0'){ last_zero=i; break; }
	
	if(last_zero==n){
		cout<<"0";
		return 0;
	}
	vector<int> zero_pos;
	long long total=0;
	for(int i=0;i<n;i++){
		if(s[i]=='0'){
			while(s[i]=='0'&&i<n) i++;
			i--;
			if(i!=last_zero){  //swap allowed
				if(y<x){   //invert cheap
					total+=y;
				}
				else total+=x;  //swapped
			}
			else total+=y;  //last needs to be inverted only
		}
	}
	cout<<total;
}
