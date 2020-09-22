#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	vector<vector <int> >v;
	for(int i=0;i<t;i++){
	    int n,a;
	    cin>>n;
	    vector<int> tmp;
	    for(int j=0;j<n;j++){
	        cin>>a;
	        tmp.push_back(a);
	    }
	    v.push_back(tmp);
	}
	for(int i=0;i<t;i++){
	    int strt=0,itr,j=0;
	    while(j<v[i].size()-1){
	        strt--;
	       if(strt<0) strt=v[i].size()+strt;
	      /*// cout<<strt<<endl;
	        while(v[i][strt]==0){
	            //cout<<strt<<endl;
	            strt--;
	            if(strt<0) strt=v[i].size()+strt;
	        }*/
	        cout<<v[i][strt]<<"s ";
	        itr=strt-(j+1);
	        if(itr<0) itr=v[i].size()+itr;
	        /*while(v[i][itr]==0){
	            itr--;
	            if(itr<0) itr=v[i].size()+itr;
	        }*/
	        cout<<v[i][itr]<<"it\n";
	        v[i].erase(v[i].begin()+itr);
	        j++;
	    }
	    cout<<v[i][strt]<<"\n";
	}
	return 0;
}
/* 1 6 1 2 3 4 5 6 */
