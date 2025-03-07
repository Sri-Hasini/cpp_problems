//Shortest Distance to a Character - leetcode(acc:71%) (easy)
//https://leetcode.com/problems/shortest-distance-to-a-character/description/
/*
Given a string s and a character c that occurs in s, return an array of integers answer where answer.length == s.length and answer[i] is the distance from index i to the closest occurrence of character c in s.
The distance between two indices i and j is abs(i - j), where abs is the absolute value function.
*/
class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector <int> ans;
        for (int k = 0; k < s.size(); k++) {
            if (s[k] == c) ans.push_back(0);
            else {
                int i = k - 1;
                int j = k + 1;
                int ind1 = 0, ind2 = 0;
                while(i >= 0 || j < s.size()) {
                    if (i >= 0) {
                        if (s[i] == c) {
                            ind1 = i;
                            break;
                        }
                        i--;
                    }
                    if (j < s.size()) {
                        if (s[j] == c) {
                            ind2 = j;
                            break;
                        }
                        j++;
                    }
                }
                int d = 0;
                if (ind1 != 0 && ind2 != 0)
                 d = min(ind1,ind2);
                if (ind1 == 0)  d = ind2;
                if (ind2 == 0)  d = ind1;
                ans.push_back(abs(k-d));
            }
        }
        return ans;
    }
};
