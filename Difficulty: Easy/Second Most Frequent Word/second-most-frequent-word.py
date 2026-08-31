class Solution:
    def secFrequent(self, arr):
        # code here
        
        if len(arr)<=1:
            return -1
            
        map ={}
        for w in arr:
            map[w] = map.get(w,0) + 1
        
        sec = 0
        maxi = max(value for value in map.values())
        
        for value in map.values():
            if value < maxi:
                sec = max(sec,value)
        if sec==0:
              return -1
        else:      
          return sec        