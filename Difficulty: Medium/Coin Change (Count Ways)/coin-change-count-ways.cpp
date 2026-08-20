class Solution {
  public:
  
  int solve(vector<int>& coins, int sum , int ind,vector<vector<int>>&dp)
  {
        if(ind==0)
        {
            if(sum%coins[0]==0)
            return 1;
            
            else         
            return 0;
        }
        if(dp[ind][sum]!=-1) return dp[ind][sum];
        int not_take = solve(coins,sum,ind-1,dp);
        
        int take =0;
        if(coins[ind]<=sum)
        {
            take = solve(coins,sum-coins[ind] , ind,dp);
        }
        return dp[ind][sum] = not_take + take;
  }
    int count(vector<int>& coins, int sum) {
        // code here
      int n = coins.size();
      vector<vector<int>> dp(n,vector<int>(sum+1 ,-1));
        
        return solve(coins,sum,n-1,dp);
    
    }
};