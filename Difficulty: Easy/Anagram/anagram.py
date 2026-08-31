class Solution:
    def areAnagrams(self, s1, s2):
       # code here
        if len(s1) != len(s2):
           return False
        freq ={}
        
        for i in s1:
          freq[i] = freq.get(i,0) + 1

        for x in s2:
           freq[x] = freq.get(x,0) - 1

        if all(value == 0 for value in freq.values()):
              return True
        
        return False
