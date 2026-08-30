class Solution:
    def findTwoElement(self, arr):
        # code here
     st  = set(arr)
     stsum = sum(st)
     arr_sum = sum(arr)
     dup = arr_sum - stsum
   
      
     n = len(arr)
             
    
    
     miss = int((n*(n+1))/2 - (sum(arr)-dup))       
      
     return [dup,miss]  