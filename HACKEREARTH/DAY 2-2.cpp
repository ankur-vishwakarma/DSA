#include<bits/stdc++.h>
using namespace std;
main(){
	//ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
	int n;
	scanf("%d",&n);
	int s[n][n]={0};
	for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%d",&s[i][j]);
	int q;
	scanf("%d",&q);
	int w[q][4];
	for(int i=0;i<q;i++) scanf("%d %d %d %d",w[i][0],w[i][1],w[i][2],w[i][3]);
	int d[n];
	for(int i=0;i<n;i++) d[i]=s[i][i];
	int k=sqrt(n);
	int sd[k+1]={0};
	for(int i=0;i<q;i++){
		int lb=(w[i][1]-1)/k,rb=(w[i][2]-1)/k;
		//cout<<lb<<" "<<rb<<endl;
		if(lb==rb){
			for(int j=w[i][1]-1;j<w[i][2];j++) d[j]=d[j]^w[i][3];
		}
		else{
			for(int j=w[i][1]-1;j<(lb+1)*k;j++) d[j]=d[j]^w[i][3];
			for(int j=lb+1;j<rb;j++){
				if(sd[j]==0) sd[j]=w[i][3];
				else sd[j]=sd[j]^w[i][3];
			}
			for(int j=rb*k;j<w[i][2];j++) d[j]=d[j]^w[i][3];
		}
		//for(int j=0;j<n;j++) cout<<d[j]<<" ";
		//cout<<endl;
	}
	//for(int i=0;i<=k;i++) cout<<sd[i]<<" ";
	long long sum=0;
	for(int i=0;i<n;i++){
	    //cout<<i/k<<endl;
	    d[i]=d[i]^sd[i/k],sum+=d[i];
	}
	printf("%I64d",sum);
}
//prtial
/*for(int i=0;i<q;i++){
		for(int j=w[i][1]-1;j<w[i][2];j++) s[j][j]=s[j][j]^w[i][3];
	}
	long long sum=0;
	for(int i=0;i<n;i++) sum+=s[i][i];
	cout<<sum;*/
	/*
	5
3 0 0 0 0
0 4 0 0 0
0 0 5 0 0
0 0 0 8 0
0 0 0 0 2
3
1 1 2 3
1 2 4 8
1 1 5 1
	*/

