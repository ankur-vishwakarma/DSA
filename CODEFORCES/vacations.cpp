#include<iostream>
using namespace std;
main(){
int n;
cin>>n;
int s[n];
for(int i=0;i<n;i++) cin>>s[i];
int rest=0,hold=0;
for(int i=0;i<n;i++){
//	cout<<i<<"i "<<s[i]<<" "<<hold<<"h "<<rest<<endl;
if(s[i]==0) rest++,hold=0;
else if(s[i]==3){
        int count=0,flag=0;
	while(s[i]==3&&i<n) i++,count++;

        if(count%2==0) flag=2;
	else flag=1;

     //  cout<<i<<"in "<<s[i]<<" "<<hold<<"h "<<rest<<endl;

	if(hold==0){
	       if(s[i]==0) rest++;
               hold=s[i];
	}
	else if(hold==1){ 
		if(s[i]==1){
			if(flag==2) rest++,hold=0;
			else hold=1;
		}
		else if(s[i]==2){
		       if(flag==1) rest++,hold=0;
	               else hold=2;
		}
		else if(s[i]==0) rest++,hold=0;
                else hold=0;
	}
       else if(hold==2){ 
		if(s[i]==2){
			if(flag==2) rest++,hold=0;
			else hold=2;
		}
		else if(s[i]==1){
		       if(flag==1) rest++,hold=0;
	               else hold=1;
		}
		else if(s[i]==0) rest++,hold=0;
                else hold=0;
	}
}
else if(s[i]==2){ if(hold==2) rest++,hold=0; else hold=2; }
else if(s[i]==1){ if(hold==1) rest++,hold=0; else hold=1; }
}
cout<<rest;
}
