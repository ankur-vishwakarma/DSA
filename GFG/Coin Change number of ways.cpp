long long count1(int S[], int m, int n,long long **dp)
    {
       if(n==0) return 1;
       if(n<0||m==0) return 0;
       if(dp[n][m]!=-1) return dp[n][m];
       return dp[n][m]=count1(S,m,n-S[0],dp)+count1(S+1,m-1,n,dp);
    }
    long long int count( int S[], int m, int n )
    {
        long long ** dp=new long long *[n+1];
        for(int i=0;i<=n;i++){
            dp[i]=new long long[m+1];
            for(int j=0;j<=m;j++) dp[i][j]=-1;
        }
        
        return count1(S,m,n,dp);
    }
