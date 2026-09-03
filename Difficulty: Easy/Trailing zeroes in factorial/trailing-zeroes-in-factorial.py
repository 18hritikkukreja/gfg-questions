class Solution:


    def trailingZeroes(self, n):
        ans = 0
    
        while n >= 5:
            n //= 5
            ans += n
    
        return ans