#include<bits/stdc++.h>
using namespace std;
main(){
	int l,m,n,k;
	cin>>l>>m>>n>>k;
	int t=n,cond_done=0;
    int seats_allowed=(k-1)/2;
	while(l!=0&&m!=0&&cond_done<t){
		cond_done++;
		if(l<seats_allowed){
			if(m>l) m-=(l+1),l=0;
			else if(m==l) m=0,l=0;
			else{
				l-=(m+1);
				m=0;
			}
			break;
		}
		if(m<seats_allowed){
			if(l>m) l-=(m+1),m=0;
			else if(m==l) m=0,l=0;
			else{
				m-=(l+1);
				l=0;
			}
			break;
		}
		if(k%2!=0){
			if(l>m) l-=(seats_allowed+1),m-=(seats_allowed);
			else l-=(seats_allowed),m-=(seats_allowed+1);
		}
		else l-=seats_allowed,m-=seats_allowed;
	}
	//loop ends due to one of following reason
	//m=0,l=0, vehicles less
	if(cond_done==t&&m!=0&&l!=0){
		seats_allowed=k/2;
		while(m!=0&&l!=0){
			t++,cond_done++;
			if(l<seats_allowed){
			if(m>l) m-=(l+1),l=0;
			else if(m==l) m=0,l=0;
			else{
				l-=(m+1);
				m=0;
			}
			break;
		    }
		if(m<seats_allowed){
			if(l>m) l-=(m+1),m=0;
			else if(m==l) m=0,l=0;
			else{
				m-=(l+1);
				l=0;
			}
			break;
		}
		if(k%2!=0){
			if(l>m) l-=(seats_allowed+1),m-=(seats_allowed);
			else l-=(seats_allowed),m-=(seats_allowed+1);
		}
		else l-=seats_allowed,m-=seats_allowed;
		}
	}
	
	if(l==0){
		//m left OR vehicles left to be filled
		while(m!=0&&cond_done<t) m--,cond_done++;
		//if m!=0 yet increase vehicles
		while(m!=0) t++,cond_done++,m--;
	}
	if(m==0){
		//m left OR vehicles left to be filled
		while(l!=0&&cond_done<t) l--,cond_done++;
		//if m!=0 yet increase vehicles
		while(l!=0) t++,cond_done++,l--;
	}
	
	//remove in pairs to fill vehicles
	//if(t>cond_done) we cn balance anyhow
	cout<<t;
}
/*int seats_left=(k-1)*n;
	if(l+m<=seats_left){   //good
		
	}
	else{  
		
	}*/
