class Solution:
  def reverseWords(self, s):
    arr = []
    first = 0

    for i in range(len(s)):
        if s[i] == ".":
            if first != i:
                arr.append(s[first:i])
            first = i + 1

    # Last word
    if first < len(s):
        arr.append(s[first:])

    ans = ""

    for i in range(len(arr)-1, -1, -1):
        ans += arr[i]
        if i != 0:
            ans += "."

    return ans