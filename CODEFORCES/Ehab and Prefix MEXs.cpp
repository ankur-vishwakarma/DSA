#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	int *s=new int[n];
	for(int i=0;i<n;i++) cin>>s[i];
	int * m=new int[n]{};
	if(s[0]>1){
		cout<<"-1";
		return 0;
	}
	int next,count=0,flag=0;
	int ans[n],lstleft;
	stack<int> unfilled;
	for(int i=0;i<n;i++) ans[i]=-1;
	if(s[0]==0){
		unfilled.push(0);
		lstleft=0;
		next=1;
		count++;
	}
	else{
		next=2;
		m[0]=1;
		ans[0]=0;
	}
	for(int i=1;i<n;i++){
		if(s[i]==next){
			ans[i]=next-1;
			m[next-1]=1;
			next++;
		}
		else if(s[i]>next){
			int max=next+count;
			if(s[i]>max){
				cout<<"-1";
				flag=1;
				break;
			}
			else{
				ans[i]=next-1;
				m[next-1]=1;
				for(int j=lstleft;j<s[i];j++){
					if(m[j]==0){
						lstleft=j;
						m[j]=1,count--;
						int ind=unfilled.top();
						unfilled.pop();
						ans[ind]=j;
					}
				}
				next=s[i]+1;
			}
		}
		else count++,unfilled.push(i);
	}
	int mx=s[n-1]+1;
	while(!unfilled.empty()){
		int ind=unfilled.top();
		unfilled.pop();
		ans[ind]=mx++;
	}
	if(flag!=1) for(int i=0;i<n;i++) cout<<ans[i]<<" ";
	delete [] m;
	delete [] s;
}
