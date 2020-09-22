#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[n],t[n],rd=0,b=0,l[n],r[n];
		for(int i=0;i<n;i++){
			cin>>s[i];
			l[n-1-i]=s[i];
			if(s[i]==1) rd++;
			else b++;
		}
		for(int i=n-1,j=0;i>=0;i--,j++){
			cin>>t[i];
			r[j]=t[i];
			if(t[i]==1) rd++;
			else b++;
		}
		float dpl[2][n],dpr[2][n];  //row 1 red
		dpl[0][0]=dpl[1][0]=0;
		if(s[0]==1) dpl[0][0]=1;
		else dpl[1][0]=1;
		for(int i=1;i<n;i++){
			if(s[i]==s[i-1]){
				if(s[i]==1) dpl[0][i]=dpl[0][i-1]+1,dpl[1][i]=dpl[1][i-1];
				else dpl[1][i]=dpl[1][i-1]+1,dpl[0][i]=dpl[0][i-1];
			}
			else{
				if(s[i]==1) dpl[0][i]=1,dpl[1][i]=dpl[1][i-1];
				else dpl[1][i]=1,dpl[0][i]=dpl[0][i-1];
			}
		}
		//for(int i=0;i<n;i++) cout<<dpl[0][i]<<" "<<dpl[1][i]<<endl;
		dpr[0][0]=dpr[1][0]=0;
		if(t[0]==1) dpr[0][0]=1;
		else dpr[1][0]=1;
		for(int i=1;i<n;i++){
			if(t[i]==t[i-1]){
				if(t[i]==1) dpr[0][i]=dpr[0][i-1]+1,dpr[1][i]=dpr[1][i-1];
				else dpr[1][i]=dpr[1][i-1]+1,dpr[0][i]=dpr[0][i-1];
			}
			else{
				if(t[i]==1) dpr[0][i]=1,dpr[1][i]=dpr[1][i-1];
				else dpr[1][i]=1,dpr[0][i]=dpr[0][i-1];
			}
		}
		//for(int i=0;i<n;i++) cout<<dpr[0][i]<<" "<<dpr[1][i]<<endl;
		
		int left=0,right=0,count=0;
		while(left<n&&right<n){
			if(rd==b) break;
			else if(rd>b){
				if(l[left]==1) rd--,left++;
				else if(r[right]==1) rd--,right++;
				else{
					float ll=dpl[0][left]/dpl[1][left],rr=dpr[0][right]/dpr[1][right];
					if(ll>rr) left++,b--;
					else right++,b--;
				}
			}
			else{
				if(l[left]==2) b--,left++;
				else if(r[right]==2) b--,right++;
				else{
					float ll=dpl[1][left]/dpl[0][left],rr=dpr[1][right]/dpr[0][right];
					if(ll>rr) left++,rd--;
					else right++,rd--;
				}
			}
			count++;
			/*cout<<count<<" "<<left<<" "<<right<<endl;
			cout<<rd<<"r b"<<b<<endl;*/
		}
		/*cout<<count<<" "<<left<<" "<<right<<endl;
		cout<<rd<<"r b"<<b<<endl;*/
		while(left<n){
			if(rd==b) break;
			if(l[left]==1) rd--;
			else b--;
			count++;
			left++;
		}
		while(right<n){
			if(rd==b) break;
			if(r[right]==1) rd--;
			else b--;
			count++;
			right++;
		}
		cout<<count<<endl;
	}
}
