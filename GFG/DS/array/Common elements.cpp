#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin>>t;
	while(t--){
		int a,b,c; cin>>a>>b>>c;
		int x[a],y[b],z[c];
		for(int i=0;i<a;i++) cin>>x[i];
		for(int i=0;i<b;i++) cin>>y[i];
		for(int i=0;i<c;i++) cin>>z[i];
		int i=0,j=0,k=0;
		set<int> v;
		while(i<a&&j<b&&k<c){
			//cout<<x[i]<<" "<<y[j]<<" "<<z[k]<<endl;
			if(x[i]==y[j]&&y[j]==z[k]) v.insert(x[i]),i++,j++,k++;
			if(x[i]<y[j]&&x[i]<z[k]&&i<a){ i++; continue; }
			else if(i>=a) break;
			if(y[j]<x[i]&&y[j]<z[k]&&j<b){ j++; continue; }
			else if(j>=b) break;
			if(z[k]<x[i]&&y[j]>z[k]&&k<c){ k++; continue; }
			else if(k>=c) break;
			if(x[i]==y[j]&&z[k]<x[i]) k++;
			else if(x[i]==y[j]&&z[k]>x[i]) i++,j++;
			else if(x[i]==z[k]&&y[j]<x[i]) j++;
			else if(x[i]==z[k]&&y[j]>x[i]) i++,k++;
			else if(z[k]==y[j]&&z[k]>x[i]) i++;
			else if(z[k]==y[j]&&z[k]<x[i]) k++,j++;
		}
		if(v.size()==0){
			cout<<"-1\n";
			continue;
		}
		for(auto i=v.begin();i!=v.end();i++) cout<<*i<<" ";
		cout<<"\n";
	}
}
