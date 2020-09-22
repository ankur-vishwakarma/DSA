#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
main(){
	int n;
	cin>>n;
	int s[50001]={0},sn[50001]={0},a;
	int index[50001],indexn[50001];
	for(int i=0;i<n;i++){
		 cin>>a;
		 if(a>=0) s[a]=1,index[a]=i;
		 else sn[abs(a)]=1,indexn[a]=i;
	}
	int m=0,c=0,flag,k;
	for(int i=0;i<50001;i++){
		if(!s[i]) continue;
		k=i;
		while(s[i]) c++,i++;
		if(c>=m){
			if(c==m){
				if(index[k]<index[flag]) m=c,flag=k;
			}
			else m=c,flag=k;
		}
		c=0;
	}
	for(int i=0;i<50001;i++){
		if(!sn[i]) continue;
		k=i;
		while(sn[i]) c++,i++;
		if(c>=m){
			if(c==m){
				if(indexn[k]<indexn[flag]) m=c,flag=k;
			}
			else m=c,flag=k;
		}
		c=0;
	}
	for(int i=flag;i<flag+m;i++) cout<<i<<endl;
	/*unordered_map <int,int> m;
	for(int i=0;i<n;i++) cin>>s[i],m[s[i]]=1;
	int mx=1,flag=s[0];
	for(int i=0;i<n;i++){
		while(m[s[i]-1]) m[s[i]]+=m[s[i]-1];
		if(m[s[i]]>mx){
			mx=m[s[i]];
			flag=s[i];
		}
	}
	int strt=flag-m[flag];
	for(int i=strt;i<=flag;i++) cout<<i<<endl;
	/*for(auto::it=m.begin();it<m.end();it++){
		if()
	}*/
}
