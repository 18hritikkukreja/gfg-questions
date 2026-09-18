class Solution {
  public:
    bool canRearrange(string& s) {
        // code here
        vector<int> freq(26,0);
        
        for( char ch : s)
        {
            freq[ch - 'a']++;
        }
        int maxi = INT_MIN;
        for(auto it : freq)
        {
            maxi = max(maxi,it);
        }
        
        int total = accumulate(freq.begin(),freq.end(),0);
        
        int rem = total - maxi;
        
        if(rem >= maxi-1)
        {
            return true;
        }
        return false;
    }
};