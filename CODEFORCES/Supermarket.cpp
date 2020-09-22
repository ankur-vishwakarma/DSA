#include<iostream>
#include<iomanip>
using namespace std;
main(){
	int n,m;
	cin>>n>>m;
	float s[n][2];
	for(int i=0;i<n;i++) cin>>s[i][0]>>s[i][1];
	float min=s[0][0]/s[0][1];
	for(int i=1;i<n;i++){
		float p=s[i][0]/s[i][1];
		 if(p<min) min=p;
	}
	std::cout << std::setprecision(8) << std::fixed;
	std::cout<<min*m;
}
