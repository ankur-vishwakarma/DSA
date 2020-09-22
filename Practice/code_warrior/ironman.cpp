#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
main(){
	int n;
	cin>>n;
	int s[n],t[n],end=n;
//	if(n%2!=0) end++;
	for(int i=0;i<n;i++) cin>>s[i],t[i]=-1;
	vector<int> v;
        for(int i=0;i<n;i++) if(s[i]%2==0) v.push_back(s[i]),s[i]=-1;
      // for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
      // cout<<endl;
       	int j=v.size()-1;
	sort(v.begin(),v.end());
	for(int i=1;i<n;i+=2){
		if(j<0) break;
	       	t[i]=v[j],j--;
	}
	int k=0;
	while(j>=0){
	       	if(t[k]==-1) t[k]=v[j],j--;
		k++;
	}
//	for(int i=0;i<n;i++) cout<<s[i]<<" ";
	j=0;
	for(int i=k;i<n;i++){
	       	if(t[i]==-1){
			for(;j<n;j++){
			       	if(s[j]!=-1){ t[i]=s[j],j++; break; }
			}
		}}
//for(int i=0;i<n;i++) cout<<t[i]<<" ";
	long long sum=0;
	for(int i=0;i<n;i++){
	     //cout<<t[i]<<" "<<sum<<endl;
		if(i%2!=0&&t[i]%2==0) sum+=(2*t[i]);
		else sum+=t[i];
	}
	cout<<sum;
}

