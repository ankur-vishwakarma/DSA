#include<iostream>
#include<vector>
using namespace std;
main(){
	long long n,k;
	cin>>n>>k;
	if(n>k*(k-1)) cout<<"NO";
	else{
		cout<<"YES"<<"\n";
		vector<int> s,t;
		long long it=0,i,j,count=0;
		for(i=1;i<=k;i++){
			for(j=i+1;j<=k;j++){
				s.push_back(i),t.push_back(j);
				//s[it][0]=i,s[it][1]=j;
				//cout<<i<<" "<<j<<endl;
				it++;
			}
			if(it>n/2) break;
		}
		//int p=k*(k-1),f=0,e=p-1,flag=0,i,count=0;
		count=0;
		for(i=0;count<n/2;i++){
			//if(flag==0) cout<<s[f][0]<<" "<<s[f][1]<<"\n",f++,flag=1;
			//else cout<<s[e][0]<<" "<<s[e][1]<<"\n",e--,flag=0;
			count++;
			cout<<s[i]<<" "<<t[i]<<"\n";
		    cout<<t[i]<<" "<<s[i]<<"\n";
		}
		if(n%2!=0) cout<<s[i]<<" "<<t[i]<<"\n";
	}
	
}
