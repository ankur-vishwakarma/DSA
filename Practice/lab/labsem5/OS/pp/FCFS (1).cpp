#include<bits/stdc++.h>
#include<fstream>
#include<string> 
using namespace std;

int main(){
	ifstream ip("aatest.csv");
	
	string p;
	string at;
	string bt;
	vector <int> pno;
	vector <int> art;
	vector <int> bst;

	while(ip.good()) {
		 
		getline(ip,p,',');
		getline(ip,at,',');
		getline(ip,bt,'\n');
		stringstream geek(p);
		int x=0,y=0,z=0;
		geek>>x;
        pno.push_back(x);
        
        stringstream geek1(at);
		geek1>>y;
        art.push_back(y);
        
        stringstream geek2(bt);
		geek2>>z;
        bst.push_back(z);
    }
    
    //now code
//    for(int i=0;i<pno.size();i++){
//    	cout<<pno[i]<<endl;
//	}
//	for(int i=0;i<pno.size();i++){
//    	cout<<art[i]<<endl;
//	}
//	for(int i=0;i<pno.size();i++){
//    	cout<<bst[i]<<endl;
//	}

    vector <int> wt;
    vector <int> tat;
    int btt=0;
    float wtime=0,tatime=0;
    wt.push_back(0);
    for(int i=1;i<pno.size();i++){
    	btt=btt+bst[i-1];
    	wt.push_back(btt-art[i]);
    	wtime=wtime+wt[i];
    	
    	//cout<<"wt[i]="<<wt[i-1]<<endl;
	}
	
for(int i=0;i<pno.size();i++) {
 tat.push_back(bst[i]+wt[i]);
 tatime=tat[i]+tatime;
 }

cout<<"pno:"<<"wt:"<<"tat:"<<endl;
   for(int i=0;i<pno.size();i++){
   	cout<<pno[i]<<"   "<<wt[i]<<"  "<<tat[i]<<endl;
   }
  int size=pno.size();
  cout<<"Avearge waiting time = "<<wtime/size<<endl;
  cout<<"Avearge turn around time = "<<(tatime/size)<<endl;
}
