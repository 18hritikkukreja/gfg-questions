class Solution {
public:

    int solve(int i, int we, int w, vector<int>& cost,
              vector<vector<int>>& dp)
    {
        int n = cost.size();

        if(we == w)
            return 0;

        if(i == n)
            return INT_MAX;

        if(dp[i][we] != -1)
            return dp[i][we];

        int take = INT_MAX;

        if(cost[i] != -1 && we + i + 1 <= w)
        {
            int temp = solve(i, we + i + 1, w, cost, dp);

            if(temp != INT_MAX)
                take = cost[i] + temp;
        }

        int not_take = solve(i + 1, we, w, cost, dp);

        return dp[i][we] = min(take, not_take);
    }

    int minimumCost(vector<int>& cost, int w)
    {
        int n = cost.size();

        vector<vector<int>> dp(n + 1, vector<int>(w + 1, -1));

        int ans = solve(0, 0, w, cost, dp);

        return ans == INT_MAX ? -1 : ans;
    }
};