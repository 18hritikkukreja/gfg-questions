//Back-end complete function Template for C++

class Solution {
  public:
  
  int solve(vector<int>& cost,int ind,vector<int>& dp)
  {
      if(ind>=cost.size()) return 0;
      
      if(dp[ind]!=-1) return dp[ind];
      return dp[ind] = cost[ind] + min(solve(cost,ind+1,dp) , solve(cost,ind+2,dp));
      
  }
    int minCostClimbingStairs(vector<int>& cost) {
        // Write your code here
        int n = cost.size();
        vector<int> dp (n+1,-1);
        
        return min(solve(cost,0,dp),solve(cost,1,dp));
    }
};