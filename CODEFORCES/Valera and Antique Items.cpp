#include<iostream>
#include<vector>
using namespace std;
main(){
	int n,v;
	cin>>n>>v;
    vector<vector<int> > s;
    for(int i=0;i<n;i++){
    	int k,l;
    	cin>>k;
    	vector<int> temp;
    	for(int j=0;j<k;j++){
    		cin>>l;
    		temp.push_back(l);
		}
		s.push_back(temp);
	}
	int count=0;
	vector<int> slr;
	for(int i=0;i<n;i++){
		for(int j=0;j<s[i].size();j++){
			if(s[i][j]<v){
				count++;
				slr.push_back(i+1);
				break;
			}
		}
	}
	cout<<count<<"\n";
	for(int i=0;i<slr.size();i++) cout<<slr[i]<<"\n";
}
