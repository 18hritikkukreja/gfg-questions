class Solution:
	def pushZerosToEnd(self, arr):
    	# code here
     return arr.sort(key = lambda x:x==0)   