#include<bits/stdc++.h>
using namespace std;
int subString(string s, int n)  
{ 
    // Pick starting point in outer loop 
    // and lengths of different strings for 
    // a given starting point 
    map<string,int> mp; int count=0;
    for (int i = 0; i < n; i++)  
        for (int len = 1; len <= n - i; len++){
        	string a=s.substr(i, len);
        	cout<<a<<endl;
        	count++;
			mp[a]++;   //when need all different use mp.size();
		}
	return count;
            
} 
main(){
    int n,k;
	cin>>n>>k;
	string s; char c[k+1]; map <char,int> m;
	cin>>s;
	for(int i=0;i<k;i++) cin>>c[i],m[c[i]]=1;
	char ans[s.length()];
	long long count=0,j=0;
	for(int i=0;i<=s.length();i++){
		if(m[s[i]]) j++;
		else{
			count+=(j*(j+1))/2;
		    j=0;
		}
		/*if(m[s[i]]) ans[j++]=s[i];
		else{
			ans[j]='\0';
			cout<<ans<<"ans\n";
			count+=subString(ans,j);            LESS EFFICIENT ALTHOUGH CORRECT
			j=0;
			ans[j]='\0';
			cout<<count<<endl;
		}
		cout<<i<<" i\n";*/
	}
	/*int alp[26]={0},count=0;
	for(int i=0;i<j;i++){
		cout<<(ans[i]-97)<<" ";
		if(!alp[ans[i]-97]) alp[ans[i]-97]=1,count++;
	}*/ //well played
	cout<<count<<endl;
    /*string s="dda";
	cout<<subString(s,s.length());*/
}
