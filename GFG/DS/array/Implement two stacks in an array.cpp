#include<bits/stdc++.h>
using namespace std;
int sk[101];
int top1,top2;
void push1(int c){
	//cout<<top1<<"s1\n";
	sk[top1++]=c;
}
void push2(int c){
	//cout<<top2<<"s2\n";
	sk[top2--]=c;
}
int pop1(){
	if(top1==0) return -1;
	top1--;
	return sk[top1];
}
int pop2(){
	if(top2==99) return -1;
	top2++;
	return sk[top2];
}
main(){
	int t;
	cin>>t;
	while(t--){
		int q;
		cin>>q;
		top1=0,top2=99;
		for(int i=0;i<q;i++){
			int a;
			cin>>a;
			if(a==1){ //stack 1
				int b;
				cin>>b;
				if(b==1){  //push
					int c;
					cin>>c;
					push1(c);
				}
				else{ //pop
					cout<<pop1()<<" ";
				}
			}
			else{
				int b;
				cin>>b;
				if(b==1){  //push
					int c;
					cin>>c;
					push2(c);
				}
				else{ //pop
					cout<<pop2()<<" ";
				}
			}
		/*for(int i=0;i<top1;i++) cout<<sk[i]<<" ";
			cout<<endl;
			for(int i=99;i>top2;i) cout<<sk[i]<<" ";
			cout<<endl;*/
		}
		cout<<endl;
	}
}
