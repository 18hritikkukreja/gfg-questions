class Solution {
  public:
  
long long solve(int n , int r, vector<vector<int>>&dp)
{
    if(n==0 && r==0) return 1;
    if(n==0 && r>0) return 0;
    if(r==0 && n != 0) return 1;
    
    if(dp[n][r]!=-1) return dp[n][r];
    return solve(n-1,r,dp) + (long long)r * solve(n-1,r-1,dp);
}
    long long nPr(int n, int r) {
        // code here
        vector<vector<int>> dp(n+1 , vector<int>(r+1,-1));
        
        
        return solve(n,r,dp);
        
    }
};