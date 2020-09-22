#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > readCSV( string filename )
{
   vector<vector<int> > v;

   ifstream in;
   in.open("a.txt");
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
void showq(queue <pair<int,pair<int,int> > > gq) 
{ 
    queue <pair<int,pair<int,int> > > g = gq; 
    while (!g.empty()) 
    { 
        cout << '\n' << g.front().first<<" "<<g.front().second.first<<" "<<g.front().second.second; 
        g.pop();
    } 
    cout << '\n'; 
} 
main(){
	vector<vector<int> > vv = readCSV( "a.txt" );
	
	vector< pair<int,pair<int,int> > > v;
	for(int i=0;i<vv.size();i++){
		v.push_back(make_pair(vv[i][1],make_pair(vv[i][0],vv[i][2])));
	}
	sort(v.begin(),v.end());
	vector< pair<int,pair<int,int> > > show(v);
	cout<<"pno AT BT\n";
	for(int i=0;i<v.size();i++) cout<<v[i].second.first<<"   "
	<<v[i].first<<"   "<<v[i].second.second<<endl;
	queue <pair<int,pair<int,int> > > q;
	q.push(make_pair(v[0].second.first,make_pair(v[0].first,v[0].second.second)));
	//pair<int,pair<int,int> > buffer = q.front();
	//cout<<buffer.first<<" "<<buffer.second.first<<" "<<buffer.second.second<<endl;
	//pushing processes in queue till we have burst time of all the processes = 0
	//TIME QUANTUM==2
	int tq=2,t=v[0].first,i=1;
	vector<pair<int,pair<int,int> > > timeline;
	timeline.push_back(make_pair(v[0].second.first,make_pair(v[0].second.second,t)));
	showq(q);
	while(!q.empty()){
		//popping process at top of queue for virtual execution
		pair<int,pair<int,int> > buffer = q.front();
		//cout<<buffer.first<<" "<<buffer.second.first<<" "<<buffer.second.second<<endl;
		q.pop();
		if(buffer.second.second>=tq) buffer.second.second-=tq,t+=tq;
		else t+=buffer.second.second,buffer.second.second=0;
		//pushing those processes which arrived while current was executing
		while(v[i].first<=t&&i<v.size()) q.push(make_pair(v[i].second.first,make_pair(v[i].first,v[i].second.second))),i++;
		//pushing current process to queue if its BT!=0
		if(buffer.second.second>0) q.push(buffer);
		showq(q);
		timeline.push_back(make_pair(buffer.first,make_pair(buffer.second.second,t)));
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
