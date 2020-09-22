#include<bits/stdc++.h>
using namespace std;
//storing directed graph in adjancy matrix
//we have represented process in rows and resources in columns
//also the request edge goes from process to resource and allocated edge is from resource to process
int graph[5][5]={{0,1,0,1,0},{0,0,0,0,0},{0,1,0,0,0},{0,0,0,0,1},{0,0,1,0,0}};
vector <int> q;
vector<int> :: iterator ptr=q.end();
bool cyclechk_cj(int i,char whocalld){
	cout<<i<<"i calledby- "<<whocalld<<endl;
	//BASE
	//ptr=q.end()-2;
	//cout<<*ptr<<" "<<*find(q.begin(),ptr,i)<<endl;
	//if(q.size()>1&&find(q.begin(),ptr,i)!=q.end()) return false;
	if(q.size()>1&&q[0]==i) return false;
	if(q.size()==5) return true;
	//RECURSIVE
	for(int j=0;j<5;j++){
		if(graph[i][j]==1){
			q.push_back(j);
			cout<<i<<" is calling "<<j<<endl;
			bool ans=cyclechk_cj(j,'r');
			if(ans==false){
				//cout<<j<<"j causes deadlock and i="<<i<<endl;
				return false;
			}
			ptr=q.end();
		    ptr--;
		    q.erase(ptr);
		}
	}
	cout<<i<<" returns!!\n";
	return true;
}
int main(){
	bool ans=true;
	//calling on processes one by one
	for(int i=0;i<5;i++){
		q.push_back(i);
		ans=cyclechk_cj(i,'m');
		if(ans==false){
			cout<<i<<" will cause deadlock!";
			return 0;
		}
		ptr=q.end();
		ptr--;
		q.erase(ptr);
	}
	cout<<"safe state";
}
