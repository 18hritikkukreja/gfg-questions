class Solution {
  public:
    int minSubset(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        sort(arr.begin(),arr.end());
        
       int total = accumulate(arr.begin(),arr.end(),0);
       int selected = 0;
       for(int i=n-1;i>=0;i--)
       {
           selected += arr[i];
           if(2*selected> total)
           {
               return n-i;
           }
       }
    }
};