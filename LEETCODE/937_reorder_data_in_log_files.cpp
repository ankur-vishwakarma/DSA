#include<bits/stdc++.h>
using namespace std;
 vector<string> reorderLogFiles(vector<string>& logs) {
        //filter 
        queue <string> digs;
        vector <pair<string,string> > alps;
        map<string, string> mp;
        for(int i=0;i<logs.size();i++){
            int n=logs[i].length();
            //cout<<logs[i][n-1]<<" "<<logs[i][n-1]-0<<endl;
            if(logs[i][n-1]-0>= 48 && logs[i][n-1]-0 <= 57){
                digs.push(logs[i]);
            }else{
                //keep the first letter at end
                //find space
                int j=0;
                while(logs[i][j]!=' ') j++;
                string temp=logs[i].substr(j+1);
                string temp1 = logs[i].substr(0,j-1);
                alps.push_back({temp,temp1});
                mp[temp+temp1]=logs[i];
            }
        }
        sort(alps.begin(),alps.end());	
        vector<string> ans;
        for(int i=0;i<alps.size();i++) ans.push_back(mp[alps[i].first+alps[i].second]);
        while(!digs.empty()) ans.push_back(digs.front()),digs.pop();
        return ans;
    }
int main(){
	int n;
	cin>>n;
	vector<string> inp;
	int i=0;
	while(i<n){
		string tmp;
		getline(cin, tmp);
		inp.push_back(tmp);
		i++;
	}
	inp.erase(inp.begin());
	for(int i=0;i<inp.size();i++) cout<<inp[i]<<" ";
	cout<<endl;
	vector<string> ans=reorderLogFiles(inp);
	for(int i=0;i<ans.size();i++) cout<<ans[i]<<endl;
	return 0;
}

