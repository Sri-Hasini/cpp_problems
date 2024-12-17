//Keyboard Row - leetcode (acc:71%) (easy)
//https://leetcode.com/problems/keyboard-row/description/
/*
Given an array of strings words, return the words that can be typed using letters of the alphabet on only one row of American keyboard like the image below.
Note that the strings are case-insensitive, both lowercased and uppercased of the same letter are treated as if they are at the same row.
In the American keyboard:
the first row consists of the characters "qwertyuiop",
the second row consists of the characters "asdfghjkl", and
the third row consists of the characters "zxcvbnm".
*/
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string up = "qwertyuiopQWERTYUIOP";
        string mid = "asdfghjklASDFGHJKL";
        string down = "zxcvbnmZXCVBNM";
        map <char,int> m1;
        map <char,int> m2;
        map <char,int> m3;
        for (auto i : up) m1[i]++;
        for (auto i : mid) m2[i]++;
        for (auto i : down) m3[i]++;
        vector <string> v;
        int x = 0;
        for (int i = 0; i < words.size(); i++) {
            if (words[i] == up || words[i] == mid || words[i] == down) {
                v.push_back(words[i]);
                continue;
            }
            int cnt = 0;
            if (m1.find(words[i][0]) != m1.end()) {
                for (int j = 0; j < words[i].size(); j++) {
                    if (m1.find(words[i][j]) != m1.end()) cnt++;
                }
            }
            else if (m2.find(words[i][0]) != m2.end()) {
                for (int j = 0; j < words[i].size(); j++) {
                    if (m2.find(words[i][j]) != m2.end()) cnt++;
                }
            }
            else if (m3.find(words[i][0]) != m3.end()) {
                for (int j = 0; j < words[i].size(); j++) {
                    if (m3.find(words[i][j]) != m3.end()) cnt++;
                }
            }
            if (cnt == words[i].size()) {
                v.push_back(words[i]);
                x++; 
            }
        }
        return v;
    }
};
