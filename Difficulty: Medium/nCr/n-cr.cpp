class Solution {
  public:
  
  int solve(int n, int r,vector<vector<int>>&dp)
  {
    if(n<r) return 0;
        if(r==0 ) return 1;
        
        if(dp[n][r]!=-1) return dp[n][r];
        return dp[n][r] = solve(n-1,r-1,dp) + solve(n-1,r,dp);   
  }
    int nCr(int n, int r) {
        // code here
     vector<vector<int>> dp(n+1,vector<int>(r+1,-1));
        return solve(n,r,dp);
    }
};