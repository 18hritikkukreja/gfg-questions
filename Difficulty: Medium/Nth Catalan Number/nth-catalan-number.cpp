class Solution {
  public:
    // Function to find the nth catalan number.
    
    int solve(int n, vector<int>&dp)
    {
        if(n<=1) return 1;
        
        if(dp[n]!=0) return dp[n];
        
        for(int i=0;i<=n-1 ; i++)
         dp[n] += solve(i,dp)*solve(n-i-1,dp);
         return  dp[n];
    }
    int findCatalan(int n) {
        // code here
        vector<int>dp(n+1,0);
        if(n==0 || n==1) return 1;
      solve(n,dp);
      return dp[n];
    }
};