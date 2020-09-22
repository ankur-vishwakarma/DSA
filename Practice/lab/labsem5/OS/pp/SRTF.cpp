#include<bits/stdc++.h>
using namespace std;
main(){
  ifstream ip("srtf.csv");
	
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
    
    //code
    //copying bst and pno in vector
   int size=pno.size();
    vector< pair<int,int> > v;
    for(int i=0;i<size;i++) {
    	v.push_back(make_pair(bst[i],pno[i]));
	}
    
    //sorting according to burst time
    sort(v.begin(), v.end()); 
    float ct=0,tat=0;
    int tatime[size+1];
     
    
    //calculating ct or tat for proceasse
    for(int i=0;i<size;i++){
    	tat=tat+v[i].first;
    	 tatime[v[i].second]=tat;
    }
     
    
    int wtime[size+1]; 
	float awt=0;
    
    //calculating wating time=tat-bst
    for(int i=0;i<size;i++){
    	wtime[i+1]=tatime[i+1]-bst[i];
    	awt=awt+wtime[i+1];
	}
    cout<<"pno:"<<" "<<"tat:"<<" "<<"wt:"<<endl;
    
    for(int i=1;i<=size;i++){
    	
    	cout<<pno[i-1]<<"    "<<tatime[i]<<"    "<<wtime[i]<<endl;
 
	}    
	float atat=0;
	for(int i=1;i<=size;i++) atat=atat+tatime[i];
    cout<<"average turn around time= "<<(atat/size)<<endl;
    cout<<"average waiting time= "<<(awt/size);
}
