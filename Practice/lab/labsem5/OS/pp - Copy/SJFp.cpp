#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > readCSV( char filename[100] )
{
   vector<vector<int> > v;

   ifstream in;
   in.open(filename);
   string line;
   while ( getline( in, line ) )               
   {
      stringstream ss( line );                    
      vector<int> row;
      string data;
      while ( getline( ss, data, ',' ) )          
      {
         stringstream geek(data); 
         int x = 0; 
         geek >> x;  
		 row.push_back(x);          
      }
      v.push_back( row );    
   }
   return v;	
}
bool f(const pair <int, pair <int,int> > &a,const pair <int, pair <int,int> > &b){
	if(a.second.first<b.second.first) return 1;
	return 0;
}
main(){
	vector<vector<int> > vv = readCSV("b.txt");
	
	vector< pair<int,pair<int,int> > > v;
	for(int i=0;i<vv.size();i++){
		v.push_back(make_pair(vv[i][1],make_pair(vv[i][0],vv[i][2])));
	}
	sort(v.begin(),v.end());
	vector< pair<int,pair<int,int> > > show(v);
	cout<<"pno AT BT\n";
	for(int i=0;i<v.size();i++) cout<<v[i].second.first<<"   "
	<<v[i].first<<"   "<<v[i].second.second<<endl;
	
	//assuming time of preemption=1s (smallest unit of time) nd checking at every 1s for processes
	int pt=v[0].first;
	vector<pair<int,pair<int,int> > > timeline;
	timeline.push_back(make_pair(0,make_pair(v[0].first,pt)));
	while(!v.empty()){
		int torun,ttr=100,itr;
		for(int i=0;i<v.size();i++){
			if(v[i].first<=pt&&v[i].second.second<ttr) torun=v[i].second.first,ttr=v[i].second.second,itr=i;
		}
		v[itr].second.second--,ttr--;
		vector< pair<int,pair<int,int> > > :: iterator ptr=v.begin();
		advance(ptr,itr);
		if(v[itr].second.second==0) v.erase(ptr);
		cout<<"pno AT BT\n";
	    for(int i=0;i<v.size();i++) cout<<v[i].second.first<<"   "
	    <<v[i].first<<"   "<<v[i].second.second<<endl;
		pt++;
		timeline.push_back(make_pair(torun,make_pair(ttr,pt)));
	}
	cout<<"\n\ntimeline\npno BT  t\n";
	for(int i=0;i<timeline.size();i++) cout<<timeline[i].first<<"   "<<timeline[i].second.first
	<<"   "<<timeline[i].second.second<<endl;
	vector<int> TAT,WT;
	for(int i=0;i<show.size();i++){
		//searching the end for each process
		int k;
		for(int j=0;j<timeline.size();j++){
			if(timeline[j].second.first==0&&timeline[j].first==show[i].second.first){ k=j; break; }
		}
		int tat=timeline[k].second.second-show[i].first;
		TAT.push_back(tat);
		WT.push_back(tat-show[i].second.second);
	}
	cout<<"\npno AT BT TAT  WT\n";
    for(int i=0;i<show.size();i++) cout<<show[i].second.first<<"   "<<show[i].first<<"   "
    <<show[i].second.second<<"   "<<TAT[i]<<"   "<<WT[i]<<endl;
}
