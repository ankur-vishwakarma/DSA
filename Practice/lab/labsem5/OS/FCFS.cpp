#include<bits/stdc++.h>
using namespace std;
main(){
	char s[100],a[1000];
vector< pair<int,pair<int,int> > > v;
for(int i=0;i<100;i++) s[i]='$';
int j=0,k=0;
ifstream  ifile;
ofstream myfile;
//READING INPUT CODE
ifile.open("a.txt");
while(!ifile.eof()){
ifile.getline(s,100);
k=0;
while(s[k]!='$'){
// cout<<s[k],
a[j++]=s[k++];
}
a[j++]=';';
for(int i=0;i<100;i++) s[i]='$';
}
ifile.close();
j=j-2;
while(j<1000) a[j++]='$';
//cout<<endl;
for(int i=0;a[i]!='$';i++) cout<<a[i];
cout<<endl;
for(int i=0;a[i]!='$';){
	/*while(a[i]!=','||){
		char b=a[i];
	}*/
	v.push_back(make_pair(a[i+2]-'0',make_pair(a[i]-'0',a[i+4]-'0')));
	//cout<<v[j].first<<endl;
	//j++;
	i+=7;
	////cout<<a[i]<<" "<<i<<endl;
}
////for(int i=0;i<v.size();i++) cout<<v[i].first<<endl;
//for(int )
sort(v.begin(),v.end());
cout<<"pno AT BT\n";
for(int i=0;i<v.size();i++) cout<<v[i].second.first<<"   "<<v[i].first<<"   "<<v[i].second.second<<endl;
vector<int> timeline, TAT, WT;
timeline.push_back(v[0].first);
for(int i=1;i<=v.size();i++) timeline.push_back(timeline[i-1]+v[i-1].second.second);
cout<<"\ntimeline\n";
for(int i=0;i<=v.size();i++) cout<<timeline[i]<<" ";
for(int i=0;i<=v.size();i++){
	int tat=timeline[i+1]-v[i].first; TAT.push_back(tat);
	WT.push_back(tat-v[i].second.second);
}
cout<<"\npno AT BT TAT WT\n";
for(int i=0;i<v.size();i++) cout<<v[i].second.first<<"   "<<v[i].first<<"   "
<<v[i].second.second<<"   "<<TAT[i]<<"   "<<WT[i]<<endl;
}

