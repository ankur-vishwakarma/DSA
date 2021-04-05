#include<bits/stdc++.h>
using namespace std;
main(){
    int t,cs=1;
    cin>>t;
    while(t--){
        int r,c;
        cin>>r>>c;
        int ** s=new int * [r];
        for(int i=0;i<r;i++) s[i]=new int[c];
        for(int i=0;i<r;i++) for(int j=0;j<c;j++) cin>>s[i][j];
        int count=0;
        int flag=0;
        while(true){
            //search max also check flag
            int i,j;
            int maxx=INT_MIN;
            for(int l=0;l<r;l++){
                for(int m=0;m<c;m++){
                    if(s[l][m]>maxx) maxx=s[l][m],i=l,j=m;
                    if((l>0&&abs(s[l-1][m]-s[l][m])<=1)||l<=0) flag=1;
                    else flag=0;
                    //cout<<flag<<" ";
                    if((l<r-1&&abs(s[l+1][m]-s[l][m])<=1)||l>=r-1) flag=1;
                    else flag=0;
                    //cout<<flag<<" ";
                    if((m>0&&abs(s[l][m-1]-s[l][m])<=1)||m<=0) flag=1;
                    else flag=0;
                    //cout<<flag<<" ";
                    if((m<c-1&&abs(s[l][m+1]-s[l][m])<=1)||m>=c-1) flag=1;
                    else flag=0;
                    //cout<<s[l][m+1]-s[l][m]<<" "<<flag<<"\n";
                }
            }
            //cout<<maxx<<" "<<flag<<endl;
            if(flag) break;
        	//update people and also insert in queue
                //up
                   int it=i-1;
                   while(it>=0&&s[it][j]<s[it+1][j]){
                       count+=(s[it+1][j]-s[it][j]-1);
                       s[it][j]=s[it+1][j]-1;
                       it--;
                   }
                   //cout<<count<<endl;
                   //left
                   it=j-1;
                   while(it>=0&&s[i][it]<s[i][it+1]){
                       count+=(s[i][it+1]-s[i][it]-1);
                       s[i][it]=s[i][it+1]-1;
                       it--;
                   }
                   //cout<<count<<endl;
                   //right
                   it=j+1;
                   while(it<c&&s[i][it]<s[i][it-1]){
                       count+=(s[i][it-1]-s[i][it]-1);
                       s[i][it]=s[i][it-1]-1;
                       it++;
                   }
                   //cout<<count<<endl;
                   //down
                   it=i+1;
                   while(it<r&&s[it][j]<s[it-1][j]){
                       count+=(s[it-1][j]-s[it][j]-1);
                       s[it][j]=s[it-1][j]-1;
                       it++;
                   }
        }
        cout<<"Case #"<<cs<<": "<<count<<endl;
        for(int i=0;i<r;i++) delete [] s[i];
        delete [] s;
        cs++;
    }
}
