class Solution:
        def maxOnes(self, arr, k):
            l = 0
            zeros = 0
            maxLen = 0

            for r in range(len(arr)):

                if arr[r] == 0:
                    zeros += 1

                while zeros > k:
                    if arr[l] == 0:
                        zeros -= 1
                    l += 1

                maxLen = max(maxLen, r - l + 1)

            return maxLen
