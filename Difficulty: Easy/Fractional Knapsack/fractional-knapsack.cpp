class Solution {
  public: 
  
   static bool cmp(pair<int,int>a,pair<int,int>b)
   {
       return (double)a.first/a.second > (double)b.first/b.second;
   }
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        
        vector<pair<int,int>> arr;
        for(int i=0;i<val.size();i++)
        {
          arr.push_back({val[i],wt[i]});
        }
        sort(arr.begin(),arr.end(),cmp);
        
        double ans = 0;
        for(auto item : arr)
        {
            int weight = item.second;
            int value = item.first;
            
            if(weight <= capacity)
            {
                ans += value;
                capacity-=weight;  
            }
            else
            {
                ans += ((double)value/weight) *capacity;
                capacity = 0;
            }
            
        }
        return ans;
    }
};
