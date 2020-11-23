#include<bits/stdc++.h>
using namespace std;
main(){
	long long a,b;
	cin>>a>>b;
	
	vector<int> dig_a,dig_b;
	while(b) dig_b.push_back(b%10),b/=10;
	reverse(dig_b.begin(),dig_b.end());
	
	int freq[10]={};
	while(a){
		int k=a%10;
		freq[k]++;
		dig_a.push_back(k);
		a/=10;
	}
	
	//for(int i=0;i<10;i++) cout<<freq[i]<<" ";
	//cout<<endl;
	
	stack<int> ans;
	int flag=0,pos=-1;
	if(dig_b.size()>dig_a.size()){
		sort(dig_a.begin(),dig_a.end(),greater<int>());
		for(int i=0;i<dig_a.size();i++) cout<<dig_a[i];
	}else{
		for(int i=0;i<dig_b.size();i++){
			if(freq[dig_b[i]]){
				freq[dig_b[i]]--;
				ans.push(dig_b[i]);
			}
			else{
				//print one smaller
				//cout<<"small\n";
				//for(int i=9;i>=0;i--) cout<<freq[i]<<" ";
				//cout<<endl;
				flag=2,pos=i;
				int strt=dig_b[i]-1;
				for(int j=strt;j>=0;j--){
					if(freq[j]){
						ans.push(j);
						freq[j]--;
						for(int i=9;i>=0;i--) while(freq[i]) ans.push(i),freq[i]--;
						flag=1;
						break;
					}
				}
				
			}
			if(flag) break;
			
		}
		if(flag==2){
			//cout<<"hello\n";
			//you have found a pos for which u dont have any no less so now backtrack
			while(flag!=1&&pos>=0){
				freq[ans.top()]++;
				ans.pop();
				pos--;
				int strt=dig_b[pos]-1;
				for(int j=strt;j>=0;j--){
					if(freq[j]){
						ans.push(j);
						freq[j]--;
						for(int i=9;i>=0;i--) while(freq[i]) ans.push(i),freq[i]--;
						flag=1;
						break;
					}
				}
			}
		}
		
		//print ans
		stack<int> f;
		while(!ans.empty()) f.push(ans.top()),ans.pop();
		while(!f.empty()) cout<<f.top(),f.pop();
	}
}
