//1816. Truncate Sentence - leetcode (easy) (acc : 85%)
//https://leetcode.com/problems/truncate-sentence/description/
/*
A sentence is a list of words that are separated by a single space with no leading or trailing spaces. Each of the words consists of only uppercase and lowercase English letters (no punctuation).
For example, "Hello World", "HELLO", and "hello world hello world" are all sentences.
You are given a sentence s​​​​​​ and an integer k​​​​​​. You want to truncate s​​​​​​ such that it contains only the first k​​​​​​ words. Return s​​​​​​ after truncating it.
  */
class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans;
        vector <int> ind;
        int cnt = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                cnt++;
                ind.push_back(i);
            }
        }
        cnt++;
        if (k == cnt) return s;
        int index = ind[k - 1];
        for (int i = 0; i < index; i++) {
            ans += s[i];
        }
        return ans;
    }
};
