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
bool f(const pair <int, pair <int,int> > &a,const pair <int, pair <int,int> > &b){
	if(a.second.first<b.second.first) return 1;
	return 0;
}
main(){
	vector<vector<int> > vv = readCSV( "a.txt" );
	
	vector< pair<int,pair<int,int> > > v;
	for(int i=0;i<vv.size();i++){
		v.push_back(make_pair(vv[i][1],make_pair(vv[i][0],vv[i][2])));
	}
	sort(v.begin(),v.end());
	cout<<"pno AT BT\n";
	for(int i=0;i<v.size();i++) cout<<v[i].second.first<<"   "
	<<v[i].first<<"   "<<v[i].second.second<<endl;
	vector<int> timeline;
	vector< pair<int,int> > TAT, WT;
	int comp[v.size()+1]={0};
    timeline.push_back(v[0].first);
    timeline.push_back(timeline[0]+v[0].second.second);
    int tat1=timeline[1]-v[0].first;
    TAT.push_back(make_pair(v[0].second.first,tat1)); 
	WT.push_back(make_pair(v[0].second.first,tat1-v[0].second.second)); 
    //timeline.push_back(timeline[i-1]+v[i-1][2]);
    //declaring min priority queue
    priority_queue <int, vector<int>, greater<int> > q;
    for(int i=1;i<v.size();i++){
    	
    	for(int k=1;k<v.size();k++){
    		//pushing those processes tht arrived while previous process is running
    		if(v[k].first<=timeline[i]&&comp[v[k].second.first]!=-1){
    			comp[v[k].second.first]=-1;
    			q.push(v[k].second.first);
			}
		}
		//poping the shortest job out
	    int torun=q.top();
	    q.pop();
		//searching popped process in list n updating the timeline
		for(int k=1;k<v.size();k++){
			if(torun==v[k].second.first){
				timeline[i+1]=timeline[i]+v[k].second.second;
				int tat=timeline[i+1]-v[k].first; TAT.push_back(make_pair(v[k].second.first,tat));
	            WT.push_back(make_pair(v[k].second.first,tat-v[k].second.second));
				break;
			}
		}
		for(int k=0;k<=i+1;k++) cout<<timeline[k]<<" ";
		cout<<endl;
	}
	sort(TAT.begin(),TAT.end()); sort(WT.begin(),WT.end());
	sort(v.begin(),v.end(),f);
	//for(int i=0;i<TAT.size();i++) cout<<TAT[i].first<<" "<<TAT[i].second<<endl;
	cout<<"\npno AT BT TAT  WT\n";
    for(int i=0;i<v.size();i++) cout<<v[i].second.first<<"   "<<v[i].first<<"   "
    <<v[i].second.second<<"   "<<TAT[i].second<<"   "<<WT[i].second<<endl;
}
/*for(int i=0;i<vv.size();i++){
		for(int j=0;j<vv[i].size();j++){
			cout<<vv[i][j]<<" "<<j<<" ";
		}
		cout<<endl;
	}*/
