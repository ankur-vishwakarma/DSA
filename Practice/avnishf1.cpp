#include<bits/stdc++.h>
using namespace std;
int changePossibilities(const int N, std::vector<int> coins) {
  vector<int> dp(N + 1, 0);
  dp[0] = 1; // Initialize - only one way to make 0 (with no coins)

  for (const auto c : coins) { // For each coin
    for (int i = c; i <= N; ++i) // For each subsum
      dp[i] += dp[i - c]; // Add new ways to make i
  }

  return dp[N];
}
int numWays(int input1){
  int N=input1;
  int coins[4]={1,2,5,10};
  vector<int> dp(N + 1, 0);
  dp[0] = 1;

  for (int c : coins) {
    for (int i = c; i <= N; ++i)
      dp[i] += dp[i - c];
  }
  return dp[N];
}
int main(){
  int N;
  cin>>N;
  /*int coins[4]={1,2,5,10};
  vector<int> dp(N + 1, 0);
  dp[0] = 1; // Initialize - only one way to make 0 (with no coins)

  for (const auto c : coins) { // For each coin
    for (int i = c; i <= N; ++i) // For each subsum
      dp[i] += dp[i - c]; // Add new ways to make i
  }
  
  cout<<dp[N];*/
  cout<<numWays(N);
}
