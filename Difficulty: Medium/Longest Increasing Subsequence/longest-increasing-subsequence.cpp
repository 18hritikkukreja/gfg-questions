class Solution {
  public:
   
  int solve(int i ,int prev,vector<int>& arr, vector<vector<int>>&dp)
  {
      if(i==arr.size())
      {
          return 0;
      }
      if(dp[i][prev+1]!=-1) return dp[i][prev+1];
      
      int len = 0+solve(i+1,prev,arr,dp); 
      
      if(prev==-1 || arr[i]>arr[prev])
      {
          len =max(1 + solve(i+1,i,arr,dp),len);
      }
      
      return dp[i][prev+1] = len;
  }
    int lis(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return solve(0 , -1,arr,dp);

    }
};