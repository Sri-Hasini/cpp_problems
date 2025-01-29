//2185. Counting Words With a Given Prefix - leetcode (easy) (acc : 84%)
//https://leetcode.com/problems/counting-words-with-a-given-prefix/description/
/*
You are given an array of strings words and a string pref.
Return the number of strings in words that contain pref as a prefix.
A prefix of a string s is any leading contiguous substring of s.
  */
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int size_n = pref.size();
        int cnt = 0;
        for (int i = 0; i < words.size(); i++) {
            bool x = false;
            for (int j = 0; j < size_n; j++) {
                if (words[i][j] != pref[j]) {
                    x = true;
                    break;
                }
            }
            if (x) continue;
            cnt++;
        }
        return cnt;
    }
};
