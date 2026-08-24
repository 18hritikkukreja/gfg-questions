class Solution {
  public:
  
 /*  reccursion
 int countFriendsPairings(int n) {
        // code here
        
        if(n==0 || n==1)
        return 1;
        
        int single = countFriendsPairings(n-1);
        int pair  = (n-1)* countFriendsPairings(n-2);
        
        return single + pair;
 }
 
 */
    int countFriendsPairings(int n) {
        // code here
        vector<int>dp(n+1,0);
        dp[0] =1;
        dp[1]=1;
        
        for(int i=2;i<=n;i++)
        {
            dp[i] = dp[i-1] + (i-1)* dp[i-2];
        }
        
        return dp[n];
    }
};
