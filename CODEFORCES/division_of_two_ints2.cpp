#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
main(){
	int n;
	cin>>n;
	int s[n],max=0;
	for(int i=0;i<n;i++){ cin>>s[i]; if(s[i]>max) max=s[i]; }
	for(int i=0;i<n;i++) if(s[i]==max){ s[i]=-10001;  break;  }
	vector<int> v;
	for(int i=0;i<n;i++) for(int j=i+1;j<n;j++) if(s[i]==s[j]&&s[i]!=-10002) v.push_back(s[i]),s[i]=s[j]=-10002;
	//for(int i=0;i<n;i++) cout<<s[i]<<" ";
        for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
       sort(s,s+n);	
	for(int i=n-1;s[i]>0;i--){
               int flag=0;
		 for(int j=0;j<v.size();j++) if(s[i]%v[j]!=0){ flag=1;  break; }
		if(flag==0){ cout<<s[i]<<" "<<max; return 0; }
	}
}
