#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	//search for first perfect square frm ths n (on both sides whichever is nearer)
	//THIS WILL MARK BEGINNING
	int ps,a=n,b=n,flag=0;
	while(a--){
		//decreasing one
		if(a%2==0){
			float root1=sqrt(a); int root2=sqrt(a);
		    if(root1-root2==0){ ps=a,flag=1; break; }
		}
		//increasing one
		if(b%2==0){
			float root1=sqrt(b); int root2=sqrt(b);
		    if(root1-root2==0){ ps=b,flag=2; break; }
		}
		b++;
	}
	cout<<ps<<"\n";
	//IF WE FOUND NEAREST SQUARE AT INCREASING WE NEED TO LEAVE SPACES TILL WE GET TO n
	if(flag==1){
	}
	//decreasing wont mind anything jst print n+1 and strt printing
	else if(flag==2){
		//cout<<n+1<<" ";
		int r=sqrt(ps);
	    int column_holds[r]={0};
	    for(int i=1;i*i<=n;i++){  //rows
	        int flagin=0,flag2=0,cond=n,inc_or_dec=0;
	        for(int j=1;j*j<=cond;j++){
	        	if(column_holds[j-1])
	        	while((float)sqrt(cond)-(int)sqrt(cond))
	        	{
	        		    cout<<column_holds[j-1]--<<" ";
	        		    //cout<<column_holds[j-1]++<<" ";
	        		    cond--,n--;
				}
			    //here hold n stable
				if(flag2==0){
				    	flag2=1,cond=n;
				    	int no=sqrt(n);
				    	column_holds[j-1]=pow(no-2,2)+1;
				    }
	        	cout<<n--<<" ";
			}
			//for(int j=0;j<r;j++) cout<<column_holds[j]<<" ";
			//n=to_print;
			cout<<endl;
	    }
	}
}
