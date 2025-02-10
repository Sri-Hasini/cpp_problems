//3174. Clear digits - leetcode (easy) (acc : 80%)
//https://leetcode.com/problems/clear-digits/description/?envType=daily-question&envId=2025-02-10
/*
You are given a string s.

Your task is to remove all digits by doing this operation repeatedly:

Delete the first digit and the closest non-digit character to its left.
Return the resulting string after removing all digits.
*/
class Solution {
public:
    string clearDigits(string s) {
        int d_count = 0, c_count = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') c_count++;
            if (s[i] >= '0' && s[i] <= '9') d_count++;
        }
        // cout << c_count << d_count;
        if (c_count == d_count) return "";
        else if (c_count > d_count) {
            int i = 0;
            while (i < s.size()) {
                if (s[i] >= '0' && s[i] <= '9') {
                    s.erase(i, 1);
                    s.erase(i-1, 1);
                    i--;
                    continue;
                }
                i++;
            }
            return s;
        }
         else return s;
    }
};
