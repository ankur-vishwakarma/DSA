#include<bits/stdc++.h>
using namespace std;
main(){
  ifstream ip("test3.csv");
	
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
    int ct1[size+1];
    int bt1[size+1];
    int ct=0;
    
    int tp=pno.size();
    
    for(int i=0;i<pno.size();i++) bt1[i+1]=bst[i];
    
//    for(int i=1;i<=size;i++) cout<<bt1[i]<<" ";
     
    while(tp!=0){
    	for(int i=1;i<=size;i++){
    		if(bt1[i]>=2&&bt1[i]<100){
    			bt1[i]=bt1[i]-2;
    			ct=ct+2;
    			if(bt1[i]==0){
    				ct1[i]=ct;
    				tp--;
    				bt1[i]=100;
				}
			}
			
			if(bt1[i]==1){
				ct=ct+1;
				ct1[i]=ct;
				bt1[i]=100;
				tp--;
			}
		}
	}
	    int wtime[size+1];
	    
	    float awt=0;
		for(int i=1;i<=size;i++) {
			wtime[i]=ct1[i]-bst[i-1];
			awt=awt+wtime[i];
		}
		
		cout<<"pno:"<<" "<<"tat:"<<" "<<"wt:"<<endl;
    
    for(int i=1;i<=size;i++){
    	
    	cout<<pno[i-1]<<"    "<<ct1[i]<<"    "<<wtime[i]<<endl;
		}
    	
    	float atat=0;
	for(int i=1;i<=size;i++) atat=atat+ct1[i];
    cout<<"average turn around time= "<<(atat/size)<<endl;
    cout<<"average waiting time= "<<(awt/size);
 
	    
	}

