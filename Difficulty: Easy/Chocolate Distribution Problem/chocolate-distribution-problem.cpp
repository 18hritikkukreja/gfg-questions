class Solution {
  public:
    int findMinDiff(vector<int>& a, int k) {
        // code here
        int n = a.size();
        
        sort(a.begin(),a.end());
        
        int mini = INT_MAX;
        for(int l =0; l<=n-k;l++)
        {
            int r=l+k-1;
            mini = min(mini, a[r]-a[l]);
        }
        return mini;
    }
};