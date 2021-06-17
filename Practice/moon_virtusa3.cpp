#include<bits/stdc++.h>
using namespace std;
int solve(string s){
	int n=s.size(),ans=0;
        for(int i=1;i<n;i++)
        {
           if(s[i-1]!=s[i])
           {
               ans++;
               int c=s[i],b=s[i-1];
               for(int l=i-2,r=i+1;l>=0 && r<n;l--,r++)
                   if(s[l]==b && s[r]==c) ans++;
                   else{ i=r-1; break; }
               }
        }
        return ans;
}
int main(){
	string s;
	cin>>s;
	cout<<solve(s);
	return 0;
}





