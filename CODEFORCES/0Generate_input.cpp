#include<bits/stdc++.h>
using namespace std;
main(){
	ofstream myfile ("0tests.txt");
  if (myfile.is_open())
  {
    for(int i=1;i<=1000000;i++) myfile << "1 ";
    myfile.close();
  }
}
