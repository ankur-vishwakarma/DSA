long long ks(int W, int wt[], int val[], int n,long long ** dp){
    
    cout<<W<<" "<<n<<" "<<dp[n][W]<<endl;
    if(W==0||n==0) return 0;
    if(dp[n][W]!=-1) dp[n][W];
    if(W-wt[0]>=0){//(take,donttake)
        return dp[n][W]=max(val[0]+ks(W-wt[0],wt+1,val+1,n-1,dp),ks(W,wt+1,val+1,n-1,dp));
    }
    else return dp[n][W]=ks(W,wt+1,val+1,n-1,dp);
}

int knapSack(int W, int wt[], int val[], int n) 
{ 
   int ** dp=new int *[n+1];
    for(int i=0;i<=n;i++){
            dp[i]=new int[W+1];
            //for(int j=0;j<=W;j++) dp[i][j]=-1;
        }
    for(int i=0;i<=n;i++) dp[i][0]=0;
    for(int i=0;i<=W;i++) dp[0][i]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=W;j++){
            dp[i][j]=dp[i-1][j];
            if(j-wt[i-1]>=0) dp[i][j]=max(dp[i][j],val[i-1]+dp[i-1][j-wt[i-1]]);
        }
    }
    return dp[n][W];
}
