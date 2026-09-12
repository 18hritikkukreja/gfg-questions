class Solution {
public:
    string chooseSwap(string &s) {

        int first[26];
        fill(first, first + 26, -1);

        // First occurrence
        for(int i = 0; i < s.size(); i++) {
            if(first[s[i] - 'a'] == -1)
                first[s[i] - 'a'] = i;
        }

        for(int i = 0; i < s.size(); i++) {

            int curr = s[i] - 'a';

            // Smaller character dhoondo
            for(int c = 0; c < curr; c++) {

                // Smaller char ki first occurrence
                // current position ke baad honi chahiye
                if(first[c] > i) {
                    char x = 'a' + c;
                    char y = s[i];

                    // All occurrences swap
                    for(char &ch : s) {
                        if(ch == x)
                            ch = y;
                        else if(ch == y)
                            ch = x;
                    }

                    return s;
                }
            }
        }

        return s;
    }
};