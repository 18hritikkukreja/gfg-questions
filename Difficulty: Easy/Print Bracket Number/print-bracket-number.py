class Solution:
	def bracketNumbers(self, s):
		# code here
	    stack = []
	    ans =[]
	    count =0
	    for x in s:
	        if x =='(':
	            count+=1
	            stack.append(count)
	            ans.append(count)
	        elif x ==')':
	            ans.append(stack.pop())
	    
	    return ans        