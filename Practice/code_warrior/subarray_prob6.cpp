#include<iostream>
#include<set>
using namespace std;
main(){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	set<pair<int,int> >v;
	int flag,hold,j=0;
	while(s[j]==s[j+1]&&j+1<n) j++;
        if(j+1==n){ cout<<"0"; return 0;     } //check this 
        if(s[j]>s[j+1]) flag=j,hold=j+1;
	else if(s[j+1]>s[j]) flag=j+1,hold=j;
         
	v.insert(make_pair(s[flag],s[hold]));
       cout<<s[flag]<<" "<<s[hold]<<endl;
       if(flag<hold) j=flag;
       else j=hold;

//forward
	for(int i=j;i<n-1;i++){
		if(s[i+1]>s[flag]){
	       	hold=flag,flag=i+1;
		v.insert(make_pair(s[flag],s[hold]));
               cout<<s[flag]<<"i1 "<<s[hold]<<endl;
		}
		else if(s[i+1]>s[hold]&&s[i+1]<s[flag]){
			hold=i+1;
			v.insert(make_pair(s[flag],s[hold]));
                        cout<<s[flag]<<"i2 "<<s[hold]<<endl;
		}
		}

//second loop backtrack
	for(;j<n;j++){
   
cout<<j<<" f"<<flag<<" h"<<hold<<endl;
	    if(j==flag){
		    flag=hold;
		    if(j+1<n){
		  int pmax;
if(j+1!=flag) pmax=s[j+1],hold=j+1;
else if(j+2<n) pmax=s[j+2],hold=j+2;
else break;
for(int i=j+2;i<n;i++) if(i!=flag&&s[i]>pmax) pmax=s[i],hold=i;
		    if(flag!=hold){
v.insert(make_pair(s[flag],s[hold]));
cout<<s[flag]<<"jm "<<s[hold]<<endl;
}
}
	    }
	    else if(j==hold){
		   if(j+1<n){
		    int pmax;
if(j+1!=flag) pmax=s[j+1],hold=j+1;
else if(j+2<n) pmax=s[j+2],hold=j+2;
else break;
 for(int i=j+2;i<n;i++) if(i!=flag&&s[i]>pmax) pmax=s[i],hold=i;
		 if(flag!=hold){   v.insert(make_pair(s[flag],s[hold]));
                               cout<<s[flag]<<"jh "<<s[hold]<<endl;
}
}
	    }
	}
	cout<<v.size();
}
