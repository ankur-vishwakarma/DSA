#include<iostream>
#include<vector>
using namespace std;
main(){
	int n,max=0;;
	cin>>n;
	vector<int> s,rem;
	for(int i=0;i<n;i++){ cin>>s[i]; if(s[i]>max) max=s[i]; }
	cout<<max<<endl;
//	for(int i=0;i<n;i++) if(s[i]==max){ s.erase(s.begin()+i);  break;  }
	vector<int> v;
	for(int i=0;i<n;i++) for(int j=i+1;j<n;j++) if(s[i]==s[j]) v.push_back(s[i]),rem.push_back(i),rem.push_back(j);
         for(int i=0;i<rem.size();i++) cout<<s[rem[i]]<<endl;
	//	for(int i=rem.size()-1;i>=0;i--) s.erase(s.begin()+rem[i]);
	for(int i=0;i<n;i++) cout<<s[i]<<" ";
       for(int i=0;i<v.size();i++) cout<<v[i]<<" ";	
	for(int i=0;i<n;i++){
		int flag=0;
		 for(int j=0;j<v.size();j++) if(s[i]%v[j]!=0){ flag=1;  break; }
		if(flag==0){ cout<<s[i]<<" "<<max; return 0; }
	}
}
