#include<iostream>
#include<set>
using namespace std;
main(){
	int n;
	cin>>n;
	int s[n];
	set <pair<int,int> > v;
	for(int i=0;i<n;i++) cin>>s[i];
        int hold=0,j=0,flag,lmax;

//initial check
while(s[j]==s[j+1]&&j+1<n) j++;
if(j==n-1){ cout<<"0"; return 0; } //check this

if(s[j]>s[j+1]) hold=j+1,flag=j;
else if(s[j+1]>s[j]) hold=j,flag=j+1;


	for(int i=flag;i<n;i++){
		if(s[i]>s[hold]){v.insert(make_pair(s[i],s[hold]));
                //cout<<s[i]<<"m "<<s[hold]<<endl; 
               }
		//traverse left
		 j=i-1,lmax=s[j];
		while(s[i]>s[j]&&s[j]>=lmax&&j>=hold&&j>=0){ //equaliry
			v.insert(make_pair(s[i],s[j]));
			//cout<<s[i]<<"l "<<s[j]<<endl;
			lmax=s[j];
			j--;
		}
		//traverse right
		j=i+1,lmax=s[j];
		while(s[i]>s[j]&&s[j]>=lmax&&j<n){
			v.insert(make_pair(s[i],s[j]));
			//cout<<s[i]<<"r "<<s[j]<<endl;
			lmax=s[j];
			j++;
		}
		if(s[j]>s[i]&&s[i]>s[hold]) hold=i;
                // cout<<i<<"i "<<hold<<"h\n";
	}
cout<<v.size();
}

			
