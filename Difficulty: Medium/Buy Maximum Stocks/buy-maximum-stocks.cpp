class Solution {
  public:
  
   static bool cmp(pair<int,int>a ,pair<int,int>b)
   {
       return a.first < b.first;
   }
    int buyMaximumProducts(int k, vector<int> price) {
        // code here
        
        int n = price.size();
        vector<pair<int,int>> p ;
        for(int i =0; i<n; i++)
        {
            p.push_back({price[i],i+1});
        }
        
        sort(p.begin(),p.end(),cmp);
        
       int count = 0;
        for(int i=0;i<n;i++)
        {
            
            while(p[i].first<=k && p[i].second>0)
            {
                count++;
                k -= p[i].first;
                p[i].second--;
            }
        }
        return count;
    }
};
