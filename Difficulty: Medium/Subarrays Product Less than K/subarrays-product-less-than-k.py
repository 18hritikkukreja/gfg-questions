class Solution:
  def countSubarray(self, arr, k):
    ans = 0
    product = 1
    l = 0

    for r in range(len(arr)):
        product *= arr[r]

        while product >= k and l<=r:
            product //= arr[l]
            l += 1
        ans += r - l + 1
    return ans
