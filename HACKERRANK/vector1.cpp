#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q,i;
    cin>>n>>q;
    vector<vector<int> > v(2,vector<int> (2));
    int s[q][2];
    for(i=0;i<n;i++){
        int k;
        v.push_back(std::vector<int>());
        cin>>k;  
        for(int j=1;j<=k;j++){
        	v[i].push_back(k);
            int p;
            cin>>p;
            v[i].push_back(p);
        }
    }
    for(i=0;i<q;i++) cin>>s[i][0]>>s[i][1];
    for(i=0;i<n;i++) for(int j=1;j<v[i][0];j++) cout<<v[i][j]<<" ";
    
    return 0;
}
