class Solution {
public:
    int maximizeSum(vector<int>& arr, int k) {
        sort(arr.begin(), arr.end());

        int sum = 0;
        int mini = INT_MAX;

        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] < 0 && k > 0) {
                arr[i] = -arr[i];
                k--;
            }

            sum += arr[i];
            mini = min(mini, abs(arr[i]));
        }

        if(k % 2)
            sum -= 2 * mini;

        return sum;
    }
};