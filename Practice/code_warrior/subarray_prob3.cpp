#include<iostream>
#include<set>
using namespace std;
main(){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	int max,pmax;
	set <pair<int,int> > t;
	for(int i=1;i<n;i++){
		if(s[i]!=s[i-1]){
		if(s[i-1]>s[i]) max=s[i-1],pmax=s[i];
		else if(s[i]>s[i-1]) max=s[i],pmax=s[i-1];
		t.insert(make_pair(max,pmax));
               	for(int j=i+1;j<n;j++){
		                if(s[j]!=max&&s[j]!=pmax){
		                 	if(s[j]>max) pmax=max,max=s[j];
		                  	else if(s[j]>pmax) pmax=s[j];
					t.insert(make_pair(max,pmax));
				//	cout<<max<<" "<<pmax<<endl;
		}
 	 }}}
	cout<<t.size();
}

