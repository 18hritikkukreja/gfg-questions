class Solution {
  public:
  
  int solve(vector<vector<int>>& mat , int i,int j,vector<vector<int>>& dp )
  {
      int n = mat.size();
      int m = mat[0].size();
      
      if(i==n || j<0 || j>=m) return INT_MIN;
      if(i==n-1) return mat[i][j];
      if(dp[i][j]!=-1) return dp[i][j];
      
      int left = solve(mat, i+1, j-1, dp);
      int right = solve(mat, i+1, j, dp);
      int down  =  solve(mat,i+1, j+1, dp);
      
      return dp[i][j] = mat[i][j] + max(left,max(right,down));
      
  }
    int maximumPath(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        int ans =-1;
        for(int i=0;i<m;i++)
        {
           ans  =  max(ans , solve(mat ,0 ,i, dp));    
        }
       return ans;
    }
};