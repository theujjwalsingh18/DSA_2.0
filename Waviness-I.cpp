// Link - https://leetcode.com/problems/total-waviness-of-numbers-in-range-i/description/

class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int res = 0;
        for (int x = num1; x <= num2; x++) {
            string s = to_string(x);
            for (int i = 1; i < s.size() - 1; i++) {
                if ((s[i] > s[i - 1] && s[i] > s[i + 1]) ||
                    (s[i] < s[i - 1] && s[i] < s[i + 1])) {
                    res++;
                }
            }
        }
        return res;
    }
};

// T.C - 0(N^2) S.C - 0(1)
