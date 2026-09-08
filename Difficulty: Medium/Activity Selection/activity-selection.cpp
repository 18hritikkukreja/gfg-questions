class Solution {
  public:
     static bool cmp(pair<int,int>a , pair<int,int>b)
     {
         return a.second < b.second;
     }
    int activitySelection(vector<int> &start, vector<int> &finish) {
        // code here
        int n = start.size();
        vector<pair<int,int>> sorted;
        for(int i=0;i<n;i++)
        {
        sorted.push_back({start[i],finish[i]});
        }
        
        sort(sorted.begin(),sorted.end(),cmp);
        int count = 1;
        int end = sorted[0].second;
        for(int i=1;i<n;i++)
        {
            if(end < sorted[i].first)
            {
                count++;
                end = sorted[i].second;
            }
        }
        
        return count;
    }
};