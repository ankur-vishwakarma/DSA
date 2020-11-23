#include<bits/stdc++.h>
using namespace std;

string countAndSay(int n) {
        if(n==1) return "1";
        string k=countAndSay(n-1);
        //cout<<n<<" "<<k<<" "<<k.size()<<endl;
        string ans="";
        if(k.length()==1){
        	ans=ans+"1",ans=ans+k;
        	return ans;
		}
		int i;
        for(i=0;i<k.length();){
            int count=1;
            while(k[i]==k[i+1]&&i<k.length()-1) i++,count++;
            ans=ans+to_string(count);
            //cout<<ans<<" "<<i<<endl;
            ans=ans+k[i];
            //cout<<ans<<" \n";
            i++;
        }
        //ans=ans+"1",ans=ans+k[i];
        return ans;
    }
    
main(){
	int n;
	cin>>n;
	cout<<countAndSay(n);
}
