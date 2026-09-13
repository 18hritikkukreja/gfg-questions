class Solution {
  public:
  
   int solve(int n , int  k, vector<vector<int>>&dp)
   {
       if(k==0) return 0;
       if(n==1) return k;
       
       if(dp[n][k]!=-1) return dp[n][k];
       
       int low = 1;
       int high = k;
       int ans = INT_MAX;
       while(low<=high)
       {
           int mid = (low+high)/ 2;
           
           int breaks = solve(n-1,mid-1,dp);
           int not_breaks = solve(n,k-mid,dp);
           
           int worst = 1 + max(breaks,not_breaks);
           
           ans = min(ans,worst);
           
           if(breaks < not_breaks)
           {
               low = mid +1;
           }
           else
           {
               high = mid-1;
           }
       }
       
       return dp[n][k] = ans;
   }
    int eggDrop(int n, int k) {
        // code here
        
      vector<vector<int>> dp(n+1,vector(k+1,-1));
      
       return solve(n,k,dp);
    }
};