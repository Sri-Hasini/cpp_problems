//3442. Maximum Difference Between Even and Odd Frequency I - leetcode (easy) (acc : 48%)
//https://leetcode.com/problems/maximum-difference-between-even-and-odd-frequency-i/description/
/*
You are given a string s consisting of lowercase English letters. Your task is to find the maximum difference between the frequency of two characters in the string such that:
One of the characters has an even frequency in the string.
The other character has an odd frequency in the string.
Return the maximum difference, calculated as the frequency of the character with an odd frequency minus the frequency of the character with an even frequency.
  */
class Solution {
public:
    int maxDifference(string s) {
        map <char, int> m;
        for (int i = 0; i < s.size(); i++) {
            m[s[i]]++;
        }
        int even_min = INT_MAX;
        int odd_max = INT_MIN;
        for (auto i : m) {
            if (i.second % 2 == 0) {
                if (even_min > i.second) even_min = i.second;
            }
            if (i.second % 2 == 1) {
                if (odd_max < i.second) odd_max = i.second;
            }
        }
        return odd_max - even_min;
    }
};
