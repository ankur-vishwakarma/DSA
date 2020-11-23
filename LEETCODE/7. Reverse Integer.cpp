#include<bits/stdc++.h>
using namespace std;
 int reverse(int x) {
	 		long long upperlimit=pow(2,31)-1,lowerlimit=-pow(2,31);
	        int neg=0;
	        /*if(x<0){
	            neg=1;
	            x=abs(x);
	        }*/
	        long long num=0;
	        while(x%10==0&&x!=0) x/=10;
	        while(x){
	            int l=x%10;
	            if(num*10+l>upperlimit||num*10+l<lowerlimit) return 0;
	            num=num*10+l;
	            //cout<<num<<endl;
	            x/=10;
	        }
	        return num;
    }
main(){
	int n;
	cin>>n;
	cout<<reverse(n);
}
