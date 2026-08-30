class Solution:
    import sys
    def maxSubarraySum(self, arr):
        # Code here
        sum =0; 
        maxi = -sys.maxsize - 1
        
        for x in arr:
            sum += x
            maxi =  max(sum,maxi)
            if sum < 0 :
                sum = 0
        
        return maxi        