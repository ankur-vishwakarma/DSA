#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	int s[n],ef[n],eb[n],off[n],ob[n];
	for(int i=0;i<n;i++) cin>>s[i],s[i]=s[i]%2;
	!s[0]?(ef[0]=1,off[0]=INT_MAX):(ef[0]=INT_MAX,off[0]=1);
	!s[n-1]?(eb[n-1]=1,ob[n-1]=INT_MAX):(eb[n-1]=INT_MAX,ob[n-1]=1);
	for(int i=1;i<n;i++){
		if(!s[i]) ef[i]=1;
		else if(ef[i-1]!=INT_MAX) ef[i]=ef[i-1]+1;
		else ef[i]=INT_MAX;
	}
	for(int i=1;i<n;i++){
		if(s[i]) off[i]=1;
		else if(off[i-1]!=INT_MAX) off[i]=off[i-1]+1;
		else off[i]=INT_MAX;
	}
	for(int i=n-2;i>=0;i--){
		if(!s[i]) eb[i]=1;
		else if(eb[i+1]!=INT_MAX) eb[i]=eb[i+1]+1;
		else eb[i]=INT_MAX;
	}
	for(int i=n-2;i>=0;i--){
		if(s[i]) ob[i]=1;
		else if(ob[i+1]!=INT_MAX) ob[i]=ob[i+1]+1;
		else ob[i]=INT_MAX;
	}
	for(int i=0;i<n;i++) cout<<ef[i]<<" ";
	cout<<endl;
	for(int i=0;i<n;i++) cout<<eb[i]<<" ";
	cout<<endl;
	for(int i=0;i<n;i++) cout<<off[i]<<" ";
	cout<<endl;
	for(int i=0;i<n;i++) cout<<ob[i]<<" ";
	cout<<endl;
	if(!s[0]) cout<<ob[1]<<" ";
	else cout<<eb[1]<<" ";
	for(int i=1;i<n-1;i++){
		if(!s[i]){
			int k=min(off[i-1],ob[i+1]);
			if(k==off[i-1]) cout<<-k<<" ";
			else cout<<k<<" ";
		}
		else{
			int k=min(ef[i-1],eb[i+1]);
			if(k==ef[i-1]) cout<<-k<<" ";
			else cout<<k<<" ";
		}
	}
	if(!s[n-1]) cout<<-off[n-2]<<" ";
	else cout<<-ef[n-2]<<" ";
}
