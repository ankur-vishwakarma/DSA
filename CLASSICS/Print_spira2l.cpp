#include<bits/stdc++.h>
using namespace std;
int calc_digit(int n){
	int d=0;
	while(n!=0) n/=10,d++;
	return d;
}
main(){
	int k;
	cin>>k;
	int d=calc_digit(k);
	int n=sqrt(k);
	int sqr[n+1];
	map<int,bool> m;
	for(int i=0;i<=n;i++) sqr[i]=i*i,m[sqr[i]]=true;
	/* under construction*
	if(k%2!=0||sqrt(k)*sqrt(k)!=k){  //check if not an even root
		int lb=n,ub=(n+2);
		if(n%2!=0) lb=n-1,ub=n+1;
		lb*=lb,ub*=ub;
		int ud=ub-k,ld=k-lb;
		if(ud<ld){  //we need to add spaces as close to upper square so at 0,0 upper square comes
		    int dd=d,j=0;
			while(ub>k&&j<n){
				while(dd>=0) cout<<" ";
				ub--,j++;
			}
			if(j==n) cout<<endl;
			if(ub>k) col[j-1]=ub+1;
		}
		else{  //we need to print extra elements
			
		}
	}*/
	int col[n]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(col[j]==0){   //for first row
			//cout<<"frst\n";
				int frst=k;
				while(j<n){
					int dd=calc_digit(frst);
					while(dd<d) cout<<" ",dd++;
					cout<<frst<<" ";
					j++,frst--;
				}
				col[n-1]=frst+1;
				col[0]=k;
				cout<<endl;
			}
			else{
				if(i-1==j&&i<=n/2){  //perfect square==we need to calculate new successor of col[j]
					int index=sqrt(col[j]);
					col[j]=sqr[index-2]+1;
					if(i<n/2) col[j+1]=col[j]-1;
					int prnt=col[j];
					while(j<n-i){
						int dd=calc_digit(prnt);
					    while(dd<d) cout<<" ",dd++;
					    cout<<prnt<<" ",prnt--,j++;
					}
					col[j-1]=prnt+1;
					//cout<<col[j]<<"h";
					while(j<n){
						int dd=calc_digit(col[j]);
					    while(dd<d) cout<<" ",dd++;
						col[j]--,cout<<col[j]<<" ",j++;
					}
					cout<<endl;
				}
				else if(i>n/2){  //everything is done jst use saved things
					while(j<n-i){
						int dd=calc_digit(col[j]);
					    while(dd<d) cout<<" ",dd++;
						col[j]++,cout<<col[j]<<" ",j++;
					}
					int prnt=col[j-1]+1;
					while(j<=i){
							int dd=calc_digit(prnt);
					    while(dd<d) cout<<" ",dd++;
					    cout<<prnt<<" ",prnt++,j++;
					}
					while(j<n){
						int dd=calc_digit(col[j]);
					    while(dd<d) cout<<" ",dd++;
						col[j]--,cout<<col[j]<<" ",j++;
					}
					cout<<endl;
				}
				else{
					if(j<n/2){
						int dd=calc_digit(col[j]);
					    while(dd<d) cout<<" ",dd++;
						col[j]++,cout<<col[j]<<" ";
					}
				}
			}
		}
		//for(int j=0;j<n;j++) cout<<col[j]<<" ";
		//cout<<"col\n";
	}
}
