class Solution {
  public:
  /* reccursion
    int countWays(int n, int k) {
        // code here
        if(k==0 && n > 0) return 0;
        if(n==0 && k>=0) return 1;
        if(n==1) return k;
        if(n==2) return k*k;
        
        return (k-1) * (countWays(n-1,k) + countWays(n-2,k));
        
    }
    */
    int countWays(int n, int k) {
        // code here
     //   if(k==0 && n > 0) return 0;
     //   if(n==0 && k>=0) return 1;
        
        long long prev2 = k;
        long long prev1 = k*k;
        if(n==1) return k;
        if(n==2) return k*k;
      for(int i =3; i<=n; i++)
      {
          int curr = 1LL*(k-1)*(prev1 + prev2);
          prev2 = prev1;
          prev1 = curr;
      }
        
        return (int)prev1;
        
    }
};