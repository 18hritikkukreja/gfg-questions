class Solution {
  public:
    int minimumDays(int s, int n, int m) {

        if(m > n)
            return -1;

        // Can't survive till first Sunday
        if(s > 6 && 6 * n < 7 * m)
            return -1;

        int sundays = s / 7;
        int buying_days = s - sundays;

        int total_req = s * m;

        int ans = (total_req + n - 1) / n;

        if(ans <= buying_days)
            return ans;

        return -1;
    }
};