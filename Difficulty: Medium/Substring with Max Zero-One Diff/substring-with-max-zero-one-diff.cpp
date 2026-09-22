class Solution {
  public:
  int solve(int i , int curr , string &s )
  {
      if(i==s.size())
      return curr;
      
      int val = s[i]=='0' ? 1 :-1;
      
      curr = max(val,curr+val);
      return max(curr,solve(i+1,curr,s));
  }
    int maxSubstring(string &s) {
        // code here
        return solve(0,0,s);
    }
};