class Solution:
    def getMaxOccuringChar(self, s):
        # code here
        c=''
        freq=0
        maxi =0
        for x in s:
            freq = s.count(x)
            if maxi < freq:
              maxi= freq
              c = x
            if freq == maxi and c  > x :
              c = x
        
        return c