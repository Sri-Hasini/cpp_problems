//Valid Anagram - leetcode(acc:65%)(easy)
//https://leetcode.com/problems/valid-anagram/description/
//Given two strings s and t, return true if t is an anagram of s, and false otherwise.
class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq1[26] = {};
        int freq2[26] = {};
        for (auto i : s) {
            freq1[i - 'a']++;
        }
        for (auto i : t) {
            freq2[i - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) return false;
        }
        return true;
    }
};
