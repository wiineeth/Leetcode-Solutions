class Solution {
public:
    int myAtoi(string s) {
        int j = 0; int res = 0; int sign = 1;
        while (j < s.size() && s[j] == ' ') j++;
        if (j < s.size() && (s[j] == '+' || s[j] == '-')) {
            sign = s[j] == '-' ? -1 : 1;
            j++;
        }
        for (int i = j; i < s.size() && isdigit(s[i]); i++) {
            int dig = s[i] - '0';
            if (sign == -1) {
                if (res < (INT_MIN + dig) / 10) return INT_MIN;
            }
            else {
                if (res > (INT_MAX - dig) / 10) return INT_MAX;
            }
            res = (res * 10) + sign * dig;
        }
        return res;
    }
};