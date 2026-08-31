class Solution:
    def isPalindrome(self, s):
        # code here
         return s[::1] == s[::-1]
