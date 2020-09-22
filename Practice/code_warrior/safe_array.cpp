#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

main(){
int t;
	cin>>t;
	int s[t][3];
	vector< vector<int> >v;
        for(int i=0;i<t;i++){
		vector<int> temp;
		cin>>s[i][0]>>s[i][1]>>s[i][2];
		for(int j=0;j<s[i][0];j++){
			int k;
			cin>>k;
			temp.push_back(k);
		}
		v.push_back(temp);
	}
 for(int i=0;i<t;i++){
          sort(v[i].begin(),v[i].end());
	  int x=v[i][0]+s[i][2],strtpos=0,endpos,hold=0;

           while(s[i][0]-1-strtpos>=s[i][1]){
               int b=x-s[i][2],e=x+s[i][2];
               int beg=0,end=s[i][0]-1,mid,flag=0;
x++;
//BINARY SEARCH

//strt
               while(beg!=end){
                      mid=(beg+end)/2;
                      if(v[i][mid]==b) strtpos=mid,flag=1;
                      else if(b<v[i][mid]) end=mid-1;
                        else beg=mid+1;}
                   if(flag!=1){
 if(v[i][mid]<b) strtpos=mid;
else{ while(v[i][mid]>b&&mid>=0) mid--; 
 strtpos=mid; 
}}
 
    //end                              

beg=0,end=s[i][0]-1,flag=0;
 while(beg!=end){
                      mid=(beg+end)/2;
                      if(v[i][mid]==e) endpos=mid,flag=1;
                      else if(e<v[i][mid]) end=mid-1;
                        else beg=mid+1;}
                   if(flag!=1){
 if(v[i][mid]>e) endpos=mid;
else{ while(v[i][mid]<e&&mid<=s[i][0]-1) mid++; 
 endpos=mid; 
}}

//calculating elements
if(endpos-strtpos>=s[i][1]){ cout<<"NO\n",hold=1; break; }

} //end of while
if(hold!=1) cout<<"YES\n";
} //end of for
}

   
