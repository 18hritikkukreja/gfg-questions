class Solution {
public:
    long long maxSum(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int n = arr.size();
        long long small = 0, large = 0;

        for(int i = 0; i < n/2; i++)
            small += arr[i];

        for(int i = (n+1)/2; i < n; i++)
            large += arr[i];

        return 2 * (large - small);
    }
};