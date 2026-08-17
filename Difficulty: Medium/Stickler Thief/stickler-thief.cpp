class Solution {
  public:
  
   int solve(vector<int>& arr,int ind , vector<int>& dp )
   {
       if(ind>=arr.size()) return 0;
       
       if(dp[ind]!=-1) return dp[ind];
       
       int steal = arr[ind] + solve(arr,ind+2,dp);
       int skip = solve(arr,ind+1,dp);
       
       return dp[ind] = max(steal,skip);
       
   }
    int findMaxSum(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int>dp(n,-1);
        
        return solve(arr,0,dp);
    }
};