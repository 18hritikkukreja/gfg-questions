class Solution {
  public:
   static bool cmp(vector<int>a, vector<int>b)
   {
       return a[1] < b[1];
   }
    vector<int> maxMeetings(vector<int> &s, vector<int> &f) {
        // code here
        vector<vector<int>> meet;
        int n = s.size();
        for(int i=0;i<n;i++)
        {
            meet.push_back({s[i],f[i],i+1});

        }
        sort(meet.begin(),meet.end(),cmp);
        vector<int> ans;
        vector<vector<int>> mt;
        mt.push_back(meet[0]);
        ans.push_back(meet[0][2]);
        for(int i=1;i<n;i++)
        {
            int m = mt.size();
            if(meet[i][0]>mt[m-1][1])
            {
                mt.push_back(meet[i]);
                ans.push_back(meet[i][2]);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
    
    
};