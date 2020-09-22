#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n];
		int ones=0,twos=0;
		for(int i=0;i<n;i++){
			cin>>a[n-i-1];
			if(a[n-i-1]==1) ones++;
			else twos++;
		}
		for(int i=0;i<n;i++){
			cin>>b[i];
			if(b[i]==1) ones++;
			else twos++;
		}
		int ops=0;
		int aptr=0,bptr=0;
		int apos1=-1,bpos1=-1,apos2=-1,bpos2=-1;
		while(true){
			if(ones==twos){
				break;
			}
			if((aptr==n&&bptr==n)){
				break;
			}
			if((a[aptr]==1||b[bptr]==1)&&ones>twos){
				if(a[aptr]==1) aptr++,ones--;
				else if(b[bptr]==1) bptr++,ones--;
				ops++;
			}
			else if((a[aptr]==2||b[bptr]==2)&&ones<twos){
				if(a[aptr]==2) aptr++,twos--;
				else if(b[bptr]==2) bptr++,twos--;
				ops++;
			}
			if(ones>twos&&a[aptr]==2&&b[bptr]==2){
				if(apos1<=aptr){ //search 1 in a on right
					apos1=aptr+1;
					while(a[apos1]!=1&&apos1<n) apos1++;
					if(apos1==n) apos1=-1;
				}
				if(bpos1<=bptr){ //search 1 in b on right
					bpos1=bptr+1;
					while(b[bpos1]!=1&&bpos1<n) bpos1++;
					if(bpos1==n) bpos1=-1;
				}
				if(apos1==-1) twos--,bptr++;
				else if(bpos1==-1) twos--,aptr++;
				else{
					int dist1=apos1-aptr,dist2=bpos1-bptr;
					if(dist1<dist2) twos--,aptr++;
					else twos--,bptr++;
				}
				ops++;
			}
			else{
				if(apos2<=aptr){ 
					apos2=aptr+1;
					while(a[apos2]!=2&&apos2<n) apos2++;
					if(apos2==n) apos2=-1;
				}
				if(bpos2<=bptr){ 
					bpos2=bptr+1;
					while(b[bpos2]!=1&&bpos2<n) bpos2++;
					if(bpos2==n) bpos2=-1;
				}
				if(apos2==-1) ones--,bptr++;
				else if(bpos2==-1) ones--,aptr++;
				else{
					int dist1=apos2-aptr,dist2=bpos2-bptr;
					if(dist1<dist2) ones--,aptr++;
					else ones--,bptr++;
				}
				ops++;
			}
		}
		cout<<ops<<endl;
	}
}
