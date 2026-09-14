class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int i =0;
        int j =0;
        int ans = INT_MIN;
        int sum = 0;
        while(j<n)
        {
            sum += arr[j];
            
            if(j-i+1 < k)
            {
                j++;
            }
            else if(j-i+1 == k)
            {
                ans = max(sum, ans);
                sum -=arr[i];
                i++;
                j++;
            }
        }
        return ans;
    }
};