#include<bits/stdc++.h>
using namespace std;
int clearAllBits(int n, int i){
    int l=32-i;
    int k=n;
    while(k!=0){
        int p=k&1;
        cout<<p;
        k=k>>1;
    }
    cout<<endl;
    n=n<<l;
    k=n;
    cout<<k<<endl;
    while(k>=0){
        int p=k&1;
        cout<<p;
        k=k>>1;
    }
    cout<<endl;
    n=n>>l;
    k=n;
    while(k>=0){
        int p=k&1;
        cout<<p;
        k=k>>1;
    }
    cout<<endl;
    return n;
}
main(){
	int n,i;
	cin>>n>>i;
	clearAllBits(n,i);
}

