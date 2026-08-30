class Solution:
    def maxProfit(self, prices):
        # code here
        mini = max(prices)
        maxi = 0
        for x in prices :
            mini = min(x,mini)
            maxi = max(maxi,x-mini)
        return maxi    