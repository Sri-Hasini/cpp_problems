//1684. Count the Number of Consistent Strings - leetcode (easy) (88%)
//https://leetcode.com/problems/count-the-number-of-consistent-strings/description/
//You are given a string allowed consisting of distinct characters and an array of strings words. A string is consistent if all characters in the string appear in the string allowed.
Return the number of consistent strings in the array words.
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int cnt = 0;
        for (int i = 0; i < words.size(); i++) {
            bool x = false;
            for (int j = 0; j < words[i].size(); j++) {
                if (allowed.find(words[i][j]) == string::npos) {//npos is a constant value denotes if the search fails or not succeed
                    x = true;
                    break;
                }
            }
            if(x) 
                x = false;
            else
                cnt++;
        }
        return cnt;
    }
};
