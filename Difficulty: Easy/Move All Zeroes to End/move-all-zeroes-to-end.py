class Solution:
	def pushZerosToEnd(self, arr):
    	# code here
    	i =0
    	for j in range(len(arr)):
    	    if arr[j]!=0:
    	        arr[j],arr[i] = arr[i],arr[j]
    	        i+=1     
    	return arr     