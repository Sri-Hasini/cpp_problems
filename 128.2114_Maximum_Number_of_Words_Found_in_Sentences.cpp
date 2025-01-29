//2114. Maximum Number of Words Found in Sentences - leetcode(easy) (acc : 86%)
//https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/description/
/*
A sentence is a list of words that are separated by a single space with no leading or trailing spaces.
You are given an array of strings sentences, where each sentences[i] represents a single sentence.
Return the maximum number of words that appear in a single sentence.
*/
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi = 0;
        int cnt = 0;
        for (int i = 0; i < sentences.size(); i++) {
            for (int j = 0; j < sentences[i].size(); j++) {
                if (sentences[i][j] == ' ') cnt++;
            }
            cnt++;
            if (maxi < cnt) maxi = cnt;
            cnt = 0;
        }
        return maxi;
    }
};
