class Solution {
public:
    string smallestNumber(int s, int d) {

        // Maximum possible digit sum with d digits
        if(s > 9 * d)
            return "-1";

        string ans = "";

        for(int i = 0; i < d; i++)
        {
            int remainingDigits = d - i - 1;

            int digit;

            if(i == 0)
                digit = max(1, s - 9 * remainingDigits);
            else
                digit = max(0, s - 9 * remainingDigits);

            ans += char('0' + digit);
            s -= digit;
        }

        return ans;
    }
};