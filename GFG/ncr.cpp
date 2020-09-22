#include<bits/stdc++.h>
using namespace std;
long long fact[1000];
unsigned long long d=1000000007;
int main()
 {
    int t;
	cin>>t;
	while(t--){
	    int n,r;
	    cin>>n>>r;
	    if(n<r){
	    	cout<<"0\n";
	    	continue;
		}
	    if(n-r<r) r=n-r;
	    unsigned long long fr=1,fn=1;
	    for(int i=n;i>=n-r+1;i--) fn=(fn%d*i)%d;
	    for(int i=1;i<=r;i++) fr=(fr%d*i)%d;
	    //cout<<fn;
	    if(fn>fr) cout<<(fn%d/fr%d)%d<<endl;
	    else cout<<fn<<endl;
	}
	return 0;
}
/* METHOD 1
//computing smallest first
	    if(nr<r){
	        for(int i=1;i<=nr;i++) fnr=(fnr%d*i)%d;
	        //nw fr r
	        for(int i=r;i>nr;i--) fr=(fr%d*i)%d;
	        fr=(fr%d*fnr%d)%d;
	        //nw n
	        for(int i=n;i>r;i--) fn=(fn%d*i)%d;
	        fn=(fr%d*fn%d)%d;
	        long long b=0,l;
	        if(fn>fnr) b=fn/fnr;
	        else b=fn;
	        if(b>fr) l=b/fr;
	        else l=b;
	        cout<<l<<endl;
	    }
	    else{
	        for(int i=1;i<=r;i++) fr=(fr%d*i)%d;
	        //nw fr nr
	        for(int i=nr;i>r;i--) fnr=(fnr%d*i)%d;
	        fnr=(fr%d*fnr%d)%d;
	        cout<<fnr<<endl;
	        //nw n
	        for(int i=n;i>nr;i--) fn=(fn%d*i)%d;
	        fn=(fnr%d*fn%d)%d;
	        long long b=0,l;
	        if(fn>fnr) b=fn/fnr;
	        else b=fn;
	        if(b>fr) l=b/fr;
	        else l=b;
	        cout<<l<<endl;
	    } 
	}
*/

//METHOD 2
/*
int nr=n-r;
	    long long fnr=1,fr=1,fn=1;
	    for(int i=1;i<=r;i++) fr=(fr%d*i%d)%d;
	    for(int i=1;i<=nr;i++) fnr=(fnr%d*i%d)%d;
	    for(int i=1;i<n;i++) fn=(fn%d*i%d)%d;
	    cout<<fn<<" "<<fr<<" "<<fnr<<endl;
	    long long h,a;
		if(fn>fr) h=(fn%d/fr%d)%d;
		else h=fn;
		if(h>fnr) a=(h%d/fnr%d)%d;
		else a=h;
	    cout<<a<<endl;
	    //cout<<(fn%d/((fnr%d*fr%d)%d))%d<<endl;
*/
