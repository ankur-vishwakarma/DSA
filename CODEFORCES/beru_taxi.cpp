#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
/*float mod(float a,float b){
	if(a-b>0) return a-b;
	else return b-a;
  }
*/
main(){
	double a,b;
	int n;
	cin>>a>>b>>n;
	double s[n][3],time[n];
	for(int i=0;i<n;i++) cin>>s[i][0]>>s[i][1]>>s[i][2];
	for(int i=0;i<n;i++){
		double dist=((a-s[i][0])*(a-s[i][0]))+((b-s[i][1])*(b-s[i][1]));
		double d=sqrt(dist);
		time[i]=d/s[i][2];
	}
	double min=time[0];
	for(int i=1;i<n;i++) if(time[i]<min) min=time[i];
	cout<<std::setprecision(7)<<std::fixed;
	cout<<min;
}

