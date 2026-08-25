class Solution {
  public:
  
  /*  reccursive
  int solve( int n , int m , string&s1, string&s2)
  {
      if(n==0 || m==0) return 0;
      
      if(s1[n-1]==s2[m-1])
      {
          return 1 + solve(n-1,m-1,s1,s2);
      }
      return max(solve(n,m-1,s1,s2) , solve(n-1,m,s1,s2));
  }
       memoixation but run time error agya
  int solve( int n , int m , string&s1, string&s2,  vector<vector<int>>dp)
  {
      if(n==0 || m==0) return 0;
      
      if(dp[n][m]!=-1) return dp[n][m];
      
      if(s1[n-1]==s2[m-1])
      {
          return dp[n][m] = 1 + solve(n-1,m-1,s1,s2,dp);
      }
      return dp[n][m]= max(solve(n,m-1,s1,s2,dp) , solve(n-1,m,s1,s2,dp));
  }
  
  */
    int lcs(string &s1, string &s2) {
        // code here
        int n = s1.size();
        int m = s2.size();
        vector<vector<int>>dp(n+1,vector(m+1,0));
        for(int i=0;i<=n;i++)
        {
            dp[i][0] =0;
        }
        for(int j=0;j<=m;j++)
        {
            dp[0][j] =0;
        }
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1; j<=m; j++)
            {
                if(s1[i-1]==s2[j-1])
                {
                    dp[i][j] = 1 + dp[i-1][j-1]; 
                }
                else
                {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        
        return dp[n][m];
    }
};
