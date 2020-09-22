#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int a[n]={};
	
	int A=0,B=0;
	for(int i=0;i<n;i++){
		if(s[i]=='A') a[i]=1,A++;
		else if(s[i]=='B') a[i]=2,B++;
	}
	
	for(int i=0;i<n;){
		if(a[i]==2){
			//search A
			int flag=i;
			for(int j=i+1;j<n;j++){
				if(a[j]==1){
					flag=j;
					break;
				}
				if(a[j]==2) break;
			}
			int c=flag-i-1;
			//cout<<flag<<endl;
			if(flag!=i){
				A+=(c/2),B+=(c/2);
				for(int j=i+1;j<flag;j++) a[j]=-1;
				i=flag+1;
			}
			else i++;
		}
		else i++;
		//cout<<A<<" "<<B<<" "<<i<<"i\n";
	}
	//for(int i=0;i<n;i++) cout<<a[i]<<" ";
	//cout<<A<<" "<<B<<"\n";
	
	//just traverse
	for(int i=0;i<n;){
		if(a[i]==2){
			i++;
			while(a[i]==0&&i<n) B++,a[i]=-1,i++;
		}
		else i++;
	}
	for(int i=n-1;i>=0;){
		if(a[i]==1){
			i--;
			while(a[i]==0&&i>=0) A++,a[i]=-1,i--;
		}
		else i--;
	}
	//cout<<A<<" "<<B<<" ";
	if(A==B) cout<<"Coalition government";
	else if(A>B) cout<<"A";
	else cout<<"B";
	return 0;
}
/*
cout<<A<<" "<<B<<" "<<i<<"i\n";
14
--AB--AB---A--
5
A-B-A
8
A--B--BA
*/
