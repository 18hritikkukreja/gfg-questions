class Solution:
    def maxSubarraySum(self, arr):
        # Code here
        def solve(i,curr,arr):
            n = len(arr)
            if i == n:
                return curr
            
            curr = max(arr[i],curr + arr[i])
            
            return max(curr,solve(i+1,curr,arr))
            
        return solve(0,0,arr)     