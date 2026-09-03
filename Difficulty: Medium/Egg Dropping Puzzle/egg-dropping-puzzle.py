class Solution:
    def eggDrop(self, n: int, k: int) -> int:
        # code here
        
        dp = [[-1] * (k + 1) for _ in range(n + 1)]
        def solve(n,k):
            if k==0: 
                return 0
            if n==1: 
                return k
                
            ans = float('inf')
            if dp[n][k]!=-1:
                return dp[n][k]
            low = 1
            high = k
            while low <= high:
                
                mid = (low + high)//2
                    
                eggbreaks = solve(n-1,mid-1)
                eggnotbreaks = solve(n,k-mid)
                
                worst = 1 + max(eggbreaks , eggnotbreaks)
                ans = min(ans,worst)
                
                if eggbreaks < eggnotbreaks:
                    low = mid+1
                else:
                    high = mid-1
            dp[n][k] =ans
            
            return dp[n][k]   
        return solve(n,k)
    