class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        // Code here
        int mini = 0;
        int maxi = 0;
        
        sort(prices.begin(),prices.end());
        int n = prices.size();
         int buy =0;
         int free = n-1;
         
         while(buy<=free)
         {
             mini+=prices[buy];
             buy++;
             free-=k;
         }
         
         buy = n-1;
         free = 0;
        
         while(free<=buy)
         {
             maxi+=prices[buy];
             buy--;
             free+=k;
         }
        
        return {mini,maxi};
    }
};