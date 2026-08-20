class Solution {
  public:
  
  int solve(int ind , int w,vector<int> &val, vector<int> &wt, vector<vector<int>>& dp)
  {
      if(w==0) return 0;
      if(ind ==0 )
      {
          if(wt[0]<=w) return val[0];
          else return 0;
      }
      
      if(dp[ind][w]!=0) return dp[ind][w];
      int not_taken = solve(ind-1,w,val,wt,dp);
      int taken =0;
      if(wt[ind]<=w) 
      taken = val [ind] + solve(ind-1,w-wt[ind],val,wt,dp);
      
      return dp[ind][w] = max(taken , not_taken) ;
  }
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        int n = val.size();
        vector<vector<int>> dp(n+1, vector<int>(W+1,0));
        return solve(n-1,W,val,wt,dp);
    }
};