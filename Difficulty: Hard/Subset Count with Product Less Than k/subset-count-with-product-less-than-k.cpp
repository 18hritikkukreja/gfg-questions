class Solution {
  public:
  int solve(int i,int curr_prod , int k ,vector<int>&arr)
  {
      int n = arr.size();
      
      if(i ==n)
      {
          return curr_prod <=k;
      }
      
      int exc = solve(i+1,curr_prod , k ,arr);
      
      int inc=0;
      if(arr[i]*curr_prod <= k)
      {
          inc = solve(i+1,curr_prod*arr[i],k,arr);
      }
      return inc+exc ;
  }
  
    int numOfSubsets(vector<int>& arr, int k) {
        // code here
        return solve(0,1,k,arr) -1;
    }
};