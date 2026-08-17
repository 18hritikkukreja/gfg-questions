class Solution {
  public:
   int solve(int m , int n, vector<vector<int>>&dp)
   {
       if(m==1 && n==1) return 1;
       if(m==0 || n==0) return 0;
       
       if(dp[m][n]!=-1) return dp[m][n];
       
       return dp[m][n] = solve(m-1,n,dp) + solve(m,n-1,dp);
       
   }
  
    int numberOfPaths(int m, int n) {
        // code here
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        
        return solve(m,n,dp);
    }
};
