#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;
typedef vector<double> vec;
typedef vector<vec> matrix;

matrix readCSV( string filename )
{
   matrix M;

   ifstream in( filename );
   string line;
   while ( getline( in, line ) )               
   {
      stringstream ss( line );                    
      vec row;
      string data;
      while ( getline( ss, data, ',' ) )          
      {
         row.push_back( stod( data ) );            
      }
      if ( row.size() > 0 ) M.push_back( row );    
   }
   return M;	
}

main(){
	matrix M = readCSV( "a.txt" );
	for(int i=0;i<M.size();i++){
		for(int j=0;j<M[i].size();j++){
			cout<<M[i][j]<<" ";
		}
		cout<<endl;
	}
}
