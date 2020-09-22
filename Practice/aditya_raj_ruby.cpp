#include <bits/stdc++.h> 
using namespace std; 
  
int count_numbers(int k, int n) 
{ 
    int dp[n + 1][2]; 
    dp[1][0] = 0; 
    dp[1][1] = k - 1; 
    for (int i = 2; i <= n; i++) {  
        dp[i][0] = dp[i - 1][1]; 
        dp[i][1] = (dp[i - 1][0] + dp[i - 1][1]) * (k - 1); 
    } 
    return dp[n][0] + dp[n][1]; 
}
int main() 
{ 
    int k,n;
    cin>>n>>k;
    cout << count_numbers(k, n); 
    return 0; 
} 
