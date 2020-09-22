#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ld long double 
#define mod 1000000007

using namespace std;
void showq(queue<int> q){
	while(!q.empty()) cout<<q.front()<<" ",q.pop();
	cout<<endl;
}
main(){
	int n;
	cin>>n;
	int s[n],freq[105]={};
	for(int i=0;i<n;i++) cin>>s[i],freq[s[i]]++;
	map<int,int> m,ff;
	queue<int> ord[105];
	for(int i=1;i<=100;i++){
		//cout<<i<<" "<<freq[i]<<endl;
		if(freq[i]!=0){
			m[freq[i]]++;
			int count=freq[i];
			while(count--) ord[freq[i]].push(i);
		}
	}
	/*for(auto it=m.begin();it!=m.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
	/*for(int i=1;i<=5;i++){
		showq(ord[i]);
	}*/
	int a=0,b=0;
	map<int,int> aa,bb;
	for(auto it=m.begin();it!=m.end();it++){
		//cout<<a<<" "<<b<<endl;
		if(it->first==1){
			//cout<<"one\n";
			a+=(it->second/2);
			//half with freq 1 in set aa
			for(int j=1;j<=it->second/2;j++) aa[ord[it->first].front()]++,ord[it->first].pop();
			//for(int j=1;j<=it->second/2;j++) ord[it->first].push(1);
			b+=(it->second/2);
			for(int j=1;j<=it->second/2;j++) bb[ord[it->first].front()]++,ord[it->first].pop();
			
			if(it->second%2!=0) a++,aa[ord[it->first].front()]++,ord[it->first].pop();
		}
		else if(it->first==2){
			//cout<<"two\n";
			//cout<<it->first<<" t "<<it->second<<endl;
			for(int i=1;i<=it->second;i++) for(int j=1;j<=2;j++) aa[ord[it->first].front()]++,ord[it->first].pop();
			//cout<<aa[ord[it->first].front()]<<"in2 "<<ord[it->first].front()<<endl;
		}
		else if(it->first==3){
			//cout<<"three\n"<<a<<" "<<b<<endl;
			while(it->second){
				if(b==a){
					for(int i=1;i<=it->second;i++) for(int j=1;j<=3;j++) aa[ord[it->first].front()]++,ord[it->first].pop();
				}
				else if(b<a){
					bb[ord[it->first].front()]++,ord[it->first].pop(); b++;
					for(int j=1;j<=it->first-1;j++) aa[ord[it->first].front()]++,ord[it->first].pop();
				}else{
					aa[ord[it->first].front()]++,ord[it->first].pop(); a++;
					for(int j=1;j<=it->first-1;j++) bb[ord[it->first].front()]++,ord[it->first].pop();
				}
				it->second--;
			}
		}
		else{   //even or odd we will only ditribute whn unequal
			while(it->second){
				if(a==b){
					for(int j=1;j<=it->first;j++) aa[ord[it->first].front()]++,ord[it->first].pop();
				}else if(a<b){
					aa[ord[it->first].front()]++,ord[it->first].pop(); a++;
					for(int j=1;j<=it->first-1;j++) bb[ord[it->first].front()]++,ord[it->first].pop();
				}else{
					bb[ord[it->first].front()]++,ord[it->first].pop(); b++;
					for(int j=1;j<=it->first-1;j++) aa[ord[it->first].front()]++,ord[it->first].pop();
				}
				it->second--;
			}
		}
		/*cout<<a<<"a b"<<b<<endl;
		cout<<"A"<<endl;
		for(auto i=aa.begin();i!=aa.end();i++) cout<<i->first<<" "<<i->second<<endl;
		cout<<"B"<<endl;
		for(auto i=bb.begin();i!=bb.end();i++) cout<<i->first<<" "<<i->second<<endl;*/
	}
	if(a!=b) cout<<"NO\n";
	else{
		cout<<"YES\n";
		for(int i=0;i<n;i++){
			if(aa[s[i]]){
				cout<<"A",aa[s[i]]--;
			}else{
				cout<<"B",bb[s[i]]--;
			}
		}
	}
}
/*
7
1 1 2 3 3 3 4
8
1 1 2 3 3 3 4 5
*/
