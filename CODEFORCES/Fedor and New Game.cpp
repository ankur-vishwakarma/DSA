#include<iostream>
using namespace std;
int mod(int a,int b){
	if(b-a>0) return b-a;
	else a-b;
}
main(){
	int n,m,k;
	cin>>n>>m>>k;
	int s[m+1];
	for(int i=0;i<=m;i++) cin>>s[i];
	string b[m+1];
	for(int i=0;i<=m;i++){
		int q=s[i],index=0;
		string tmp
		//cout<<s[i]<<"\n";
		do{
			int r=q%2;
			q/=2;
			b[i][index]=(char)r;
			cout<<b[i][index];
			index++;
		cout<<q<<" "<<r<<"r\n";
		}while(q!=1);
		cout<<b[i]<<"\n";
	}
	/*for(int i=0;i<=m;i++) cout<<b[i]<<" ";
	int flag=0;
	for(int i=0;i<m;i++){
		int a=mod(b[i],b[m]);
		cout<<a<<"a\n";
		if(a<=k) flag++;
	}
	cout<<flag;*/
}
