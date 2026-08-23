class Solution {
  public:
  bool solve(vector<int>& arr, int i, int sum1, int total, vector<vector<int>>&dp)
  {
     if(i==arr.size())
     return sum1 == total - sum1;
     
     if(dp[i][sum1]!= -1) return dp[i][sum1];
      return  dp[i][sum1]= (solve(arr,i+1,sum1+arr[i], total ,dp) || solve(arr,i+1,sum1,total,dp));
      
      
  }
  
    bool equalPartition(vector<int>& arr) {
        // code here
        int n = arr.size();
        int total = accumulate(arr.begin(),arr.end(),0);
        vector<vector<int>> dp(n,vector<int>(total+1 ,-1));
        
        return solve(arr,0,0,total,dp);
    }
};