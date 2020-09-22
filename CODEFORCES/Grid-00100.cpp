#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int **s=new int *[n];
		for(int i=0;i<n;i++) s[i]=new int[n]{};
		
		/*//put in diagonals
		int i=0,j=0;
		while(k>0&&i<n){
			s[i][i]=1;
			i++,k--;
		}
		//side diagonals
		i=0,j=1;
		while(k>0){
			if(i+j>=n) i=0,j++;
			//cout<<i<<" "<<j<<" "<<k<<endl;
			if(k>1) s[i][i+j]=s[i+j][i]=1,k-=2;
			else s[i][i+j]=1,k--;
			i++;
		}
		int mxr=-1,mnr=INT_MAX,mxc=0,mnc=INT_MAX;
		for(int i=0;i<n;i++){
			int r=0,c=0;
			for(int j=0;j<n;j++){
				r+=s[i][j];
				c+=s[j][i];
			}
			if(r>mxr) mxr=r;
			if(r<mnr) mnr=r;
			if(c>mxc) mxc=c;
			if(c<mnc) mnc=c;
		}
		//	cout<<mxr<<" "<<mnr<<endl;
		cout<<pow(mxr-mnr,2)+pow(mxc-mnc,2)<<endl;*/
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++) cout<<s[i][j];
			cout<<endl;
		}
	}
}
