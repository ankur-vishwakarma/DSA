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

main(){
	vector<vector<int> > v = readCSV( "a.txt" );
	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[i].size();j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
}
