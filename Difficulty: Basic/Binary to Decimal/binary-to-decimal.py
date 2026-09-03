class Solution:
	def binaryToDecimal(self, b):
		# code here
		s = b[::-1]
		ans =0
		for i in range(len(s)):
		    if s[i]=='1':
		        ans += 2**i
		return ans	    