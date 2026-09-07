class Solution {
  public:
  
   int solve(int i ,int curr_w ,vector<int>& val,vector<int>& wt, int capacity, vector<vector<int>>&dp )
   {
       int n = wt.size();
       if(i==n)
       {
           return 0;
       }
       if(dp[i][curr_w]!=-1) return dp[i][curr_w];
       int take = 0;
       if(curr_w + wt[i]<=capacity)
         take = val[i] + solve(i,curr_w + wt[i] ,val ,wt, capacity,dp);
       
       int not_take  = solve(i+1,curr_w,val,wt,capacity,dp);
       
       return dp[i][curr_w] = max(take,not_take);
   }
    int knapSack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        int  n = wt.size();
        vector<vector<int>> dp(n+1,vector<int>(capacity+1,-1));
      return solve(0,0,val,wt,capacity,dp);
     
     
    }
};