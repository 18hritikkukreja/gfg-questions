class Solution:
    def decToBinary(self, n):
        # code here
        s =""
        
        while(n>0):
            s += str(n&1)
            n = n>>1
        
        return s[::-1]    