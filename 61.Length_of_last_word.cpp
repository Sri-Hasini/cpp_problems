//Length of last word - leetcode (easy) (acc:54%)
//https://leetcode.com/problems/length-of-last-word/description/
/*
Given a string s consisting of words and spaces, return the length of the last word in the string.
A word is a maximal substring consisting of non-space characters only.
*/
class Solution {
public:
    int lengthOfLastWord(string s) {
        int x = 0;
        int y = 0;
        for (int i = 0; i < s.size()-1; i++) {
            if (s[i]!= ' ') {
                x++;
            }
            else {
                y = x;
                if (s[i+1] != ' ')
                x = 0;
            }
        }
        if (s[s.size()-1] == ' ') y = x;
        if (s[s.size()-1] !=' ') {
            x++;
            y = x;
        }
        return y;
    }
};
