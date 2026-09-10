class Solution {
  public:
   int solve(int h,vector<int>&dp)
   {
       if(h==1 || h==0)
       return 1;
       
       if(dp[h]!=-1) return dp[h];
       
       return dp[h] = solve(h-1,dp)*solve(h-1,dp) + 2*solve(h-1,dp)*solve(h-2,dp) ;
   }
    int countBT(int h) {
        // code here
       vector<int> dp(h+1,-1);
        
        return solve(h,dp);
    }
};