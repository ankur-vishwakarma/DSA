#include<bits/stdc++.h>
#define r_no 3
#define total 5
using namespace std;

int allctd[5][3]={{0,1,0},{2,0,0},{3,0,0},{2,1,1},{0,0,2}};
int max_a[5][3]={{7,5,3},{3,2,2},{9,0,2},{2,2,2},{4,3,3}};
int available[3]={3,3,2};
deque <int> processed;

bool search(int j){
	deque <int> buf= processed;
	while(!buf.empty()){
		int n=buf.front();
		if(n==j) return true;
		buf.pop_front();
	}
	return false;
}

void showq() 
{ 
    deque <int > g = processed; 
    cout<<"sequence is: ";
    while (!g.empty()) 
    { 
        cout <<  g.front() <<" "; 
        g.pop_front();
    } 
    cout << '\n'; 
} 
int cnt=0;
bool bankers_cj(int i,char who_called){
	cnt++;
	cout<<i<<"i called by-"<<who_called<<endl;
	showq();
	
	//base case - when current no of processes in processed queue == total processes thn we r done
	if(processed.size()==total){
		cout<<"BASE\n";
		showq();
		return true;
	}
	//recursion - check for current process if true thn call next else return false
	//if got true will do nothing nd print if false we will try a nxt permutation
	//rememeber to BACKTRACK if current sequence is wrong!! PNC ERROR
	
	//PERFORMING CHECK FOR CURRENT PROCESS
	vector<int> need;
	for(int j=0;j<r_no;j++) need.push_back(max_a[i][j]-allctd[i][j]);
	cout<<"avail\n";
	for(int j=0;j<r_no;j++) cout<<available[j]<<" ";
	cout<<"\nneeded\n";
	for(int j=0;j<r_no;j++) cout<<need[j]<<" ";
	cout<<endl;
	for(int j=0;j<r_no;j++){
		if(need[j]>available[j]){ cout<<i<<"i returns\n"; return false; }
	}
	cout<<i<<" can be afforded\n";
	//process can be afforded if we are here - UPDATING AVAILABLE VECTOR AND CALLING ON OTHER PROCESSES
	
	//VIRTUALLY RUNNING THE PROCESS AND RELEASING ITS RESOURCES
	//UPDATION
	for(int j=0;j<r_no;j++) available[j]=available[j]+allctd[i][j];
	
	//RECURSIVE CALLS
	for(int j=0;j<total;j++){
		bool ans=false;
		if(!search(j)){
			processed.push_back(j);
			ans=bankers_cj(j,'r');
			if(ans) return true;
		    if(processed.back()==j) processed.pop_back();
		}
	}
	//BACKTRACK - means no sequence by placing current process in this position is true 
	//so reverting the changes we did in available array
	for(int j=0;j<r_no;j++) available[j]=available[j]-allctd[i][j];
	return false;
}
main(){
	bool ans=false;
	for(int i=0;i<total;i++){
		processed.push_back(i); //pushing process into queue
	    ans=bankers_cj(i,'m');
	    if(ans==true) break;
	    else processed.pop_back();
	}
	if(ans==false) cout<<"no sequence is safe as per given conditions!!";
}
/*
	cout<<i<<"i c"<<count<<endl;
	showq();*/

